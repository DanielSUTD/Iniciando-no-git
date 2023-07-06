#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "FuncoesPCalculadoraMelhorada.h"


int main(void){
setlocale(LC_ALL, "portuguese");

int alternativa, expoente, opcao, indice;
float num1, num2, resultado;

alternativa = expoente = opcao = indice = 0;
num1 = num2 = resultado = 0;

do{
menu();
calculaValores(&alternativa, &resultado, &expoente, &num1, &num2, &indice);


printf("\n\n1 - Continuar o programa || Qualquer outro número - finalizar o programa\n\n");
scanf("%i", &opcao);


}while(opcao == 1);

system("pause");
return 0;
}
