#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

/*
Crie uma estrutura chamada Ret�ngulo. Essa estrutura dever� conter o ponto
superior esquerdo e o ponto inferior direito do ret�ngulo. Cada ponto � definido
por uma estrutura Ponto, a qual cont�m as posi��es X e Y. Fa�a um programa que
declare e leia uma estrutura Ret�ngulo e exiba a �rea e o comprimento da diagonal
e o per�metro desse ret�ngulo.
*/

/*
Usando a estrutura Ret�ngulo do exerc�cio anterior, fa�a um programa que declare
e leia uma estrutura Ret�ngulo e um Ponto, e informe se esse ponto est� ou n�o
dentro do ret�ngulo
*/

typedef struct ponto{
 float x;
 float y;
}ponto;

float calculaBase(ponto pontoInferior, ponto pontoSuperior){
 //a fabs � respons�vel por fornecer o m�dulo de um n�mero calculado!
 //Exemplo = -6 -7 = -13
 //A fabs pega esse - 13 e transforma em 13!
 return fabs(pontoInferior.x - pontoSuperior.x);
}

float calculaAltura(ponto pontoInferior, ponto pontoSuperior){
 //a fabs � respons�vel por fornecer o m�dulo de um n�mero calculado!
 //Exemplo = -6 -7 = -13
 //A fabs pega esse - 13 e transforma em 13!
 return fabs(pontoInferior.y - pontoSuperior.y);
}

float calculaArea(float base, float altura){
  return base * altura;
}

float calculaPerimetro(float base, float altura){
 //Esse return vai retornar diretamente para a nossa vari�vel perimetro no int main!
 return 2 * (base + altura);
}

float calculaDiagonal(float base, float altura){
 //sqrt = fun��o da math.h que calcula a raiz quadrada!
 //pow = fun��o da math.h que calcula a potencia��o de um n�mero!
 return sqrt(pow(base, 2) + pow(altura, 2));
}

//Fun��o para verificar se o ponto est� dentro do ret�ngulo!
int verificaPonto(ponto pontoSuperior, ponto pontoInferior, ponto pontoUsuario){
 if(pontoUsuario.x >= pontoSuperior.x && pontoUsuario.x <= pontoInferior.x && pontoUsuario.y >= pontoSuperior.y && pontoUsuario.y <= pontoInferior.y){
    return 1;
 }else{
    return 0;
 }
}

int main(void){
setlocale(LC_ALL, "portuguese");


ponto pontoSuperior;
ponto pontoInferior;
ponto pontoUsuario;
float base, altura, area, perimetro, diagonal;

printf("\nDigite os n�meros pertencentes ao ponto inferior direito: \n");
printf("X: ");
scanf("%f", &pontoInferior.x);
printf("Y: ");
scanf("%f", &pontoInferior.y);

printf("\nDigite os n�meros pertencentes ao ponto superior esquerdo: \n");
printf("X: ");
scanf("%f", &pontoSuperior.x);
printf("Y: ");
scanf("%f", &pontoSuperior.y);


//Fazendo a atribui��o do valor que foi calculado dentro das fun��es para a pr�pria vari�vel!
base = calculaBase(pontoInferior, pontoSuperior);
altura = calculaAltura(pontoInferior, pontoSuperior);
area = calculaArea(base, altura);
perimetro = calculaPerimetro(base, altura);
diagonal = calculaDiagonal(base, altura);


printf("\nDigite as coordenadas dos pontos para verificar se est� presente no ret�ngulo: \n");
printf("X: ");
scanf("%f", &pontoUsuario.x);
printf("Y: ");
scanf("%f", &pontoUsuario.y);

//Verifica��o
if(verificaPonto(pontoSuperior, pontoInferior, pontoUsuario) == 1){
    printf("\nO ponto est� dentro do ret�ngulo!");
}else{
    printf("\nO ponto est� fora do ret�ngulo!");
}

//Mostrando todos os valores pertencentes ao ret�ngulo!
printf("\nA base do ret�ngulo: %f", base);
printf("\nA altura do ret�ngulo: %f", altura);
printf("\nA �rea do ret�ngulo �: %f", area);
printf("\nO per�metro do ret�ngulo �: %f", perimetro);
printf("\nA diagonal do ret�ngulo �: %f", diagonal);

system("pause");
return 0;
}
