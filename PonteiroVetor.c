#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

/*
Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros
*/

/*
Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.
*/

void imprimeVetor(int vetor[MAX], int *cont){
 int *ponteiro2 = vetor;
  *cont = 0;
  while(*cont < MAX){
    printf("\n|%i|", *ponteiro2);
    *cont = *cont + 1;
    *ponteiro2++;
  }
}

void preencheVetor(int vetor[MAX], int *valor){
  //O ponteiro está recebendo o endereço da primeira posição do vetor!
  int *ponteiro = vetor;
    while(*ponteiro < MAX){
      //Acrescenta o valor naquele endereço do vetor!
     *ponteiro = *valor;
     //Ponteiro vai para o próximo endereço do vetor!
     *ponteiro++;
  }

}

int main(void){
setlocale(LC_ALL, "portuguese");

int vetor[MAX] = {0};
int valor, cont;


printf("Digite um valor: ");
scanf("%i", &valor);

imprimeVetor(vetor, &cont);
preencheVetor(vetor, &valor);
printf("\n\nVetor com valor: \n\n");
imprimeVetor(vetor, &cont);

system("pause");
return 0;
}
