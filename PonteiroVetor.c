#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

/*
Crie uma fun��o que receba dois par�metros: um vetor e um valor do mesmo tipo
do vetor. A fun��o dever� preencher os elementos de vetor com esse valor. N�o
utilize �ndices para percorrer o vetor, apenas aritm�tica de ponteiros
*/

/*
Crie uma fun��o que receba como par�metro um vetor e o imprima. N�o utilize
�ndices para percorrer o vetor, apenas aritm�tica de ponteiros.
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
  //O ponteiro est� recebendo o endere�o da primeira posi��o do vetor!
  int *ponteiro = vetor;
    while(*ponteiro < MAX){
      //Acrescenta o valor naquele endere�o do vetor!
     *ponteiro = *valor;
     //Ponteiro vai para o pr�ximo endere�o do vetor!
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
