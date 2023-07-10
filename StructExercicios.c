#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

/*
Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que
declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal
e o perímetro desse retângulo.
*/

/*
Usando a estrutura Retângulo do exercício anterior, faça um programa que declare
e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não
dentro do retângulo
*/

typedef struct ponto{
 float x;
 float y;
}ponto;

float calculaBase(ponto pontoInferior, ponto pontoSuperior){
 //a fabs é responsável por fornecer o módulo de um número calculado!
 //Exemplo = -6 -7 = -13
 //A fabs pega esse - 13 e transforma em 13!
 return fabs(pontoInferior.x - pontoSuperior.x);
}

float calculaAltura(ponto pontoInferior, ponto pontoSuperior){
 //a fabs é responsável por fornecer o módulo de um número calculado!
 //Exemplo = -6 -7 = -13
 //A fabs pega esse - 13 e transforma em 13!
 return fabs(pontoInferior.y - pontoSuperior.y);
}

float calculaArea(float base, float altura){
  return base * altura;
}

float calculaPerimetro(float base, float altura){
 //Esse return vai retornar diretamente para a nossa variável perimetro no int main!
 return 2 * (base + altura);
}

float calculaDiagonal(float base, float altura){
 //sqrt = função da math.h que calcula a raiz quadrada!
 //pow = função da math.h que calcula a potenciação de um número!
 return sqrt(pow(base, 2) + pow(altura, 2));
}

//Função para verificar se o ponto está dentro do retângulo!
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

printf("\nDigite os números pertencentes ao ponto inferior direito: \n");
printf("X: ");
scanf("%f", &pontoInferior.x);
printf("Y: ");
scanf("%f", &pontoInferior.y);

printf("\nDigite os números pertencentes ao ponto superior esquerdo: \n");
printf("X: ");
scanf("%f", &pontoSuperior.x);
printf("Y: ");
scanf("%f", &pontoSuperior.y);


//Fazendo a atribuição do valor que foi calculado dentro das funções para a própria variável!
base = calculaBase(pontoInferior, pontoSuperior);
altura = calculaAltura(pontoInferior, pontoSuperior);
area = calculaArea(base, altura);
perimetro = calculaPerimetro(base, altura);
diagonal = calculaDiagonal(base, altura);


printf("\nDigite as coordenadas dos pontos para verificar se está presente no retângulo: \n");
printf("X: ");
scanf("%f", &pontoUsuario.x);
printf("Y: ");
scanf("%f", &pontoUsuario.y);

//Verificação
if(verificaPonto(pontoSuperior, pontoInferior, pontoUsuario) == 1){
    printf("\nO ponto está dentro do retângulo!");
}else{
    printf("\nO ponto está fora do retângulo!");
}

//Mostrando todos os valores pertencentes ao retângulo!
printf("\nA base do retângulo: %f", base);
printf("\nA altura do retângulo: %f", altura);
printf("\nA área do retângulo é: %f", area);
printf("\nO perímetro do retângulo é: %f", perimetro);
printf("\nA diagonal do retângulo é: %f", diagonal);

system("pause");
return 0;
}
