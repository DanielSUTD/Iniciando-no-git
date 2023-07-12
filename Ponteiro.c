#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.
*/

void preencheVetor(int vetor[5], int i){
  for(i = 0; i < 5; i++){
     printf("Digite o valor do vetor[%i]: ", i + 1);
     scanf("%i", &vetor[i]);
  }
}

void imprimeVetor(int vetor[5], int i){
 for(i = 0; i < 5; i++){
    printf("|%i|\n", vetor[i]);
 }
}

void somandoCadaPosicao(int vetor[5], int i){
int *ponteiro;
 ponteiro = vetor;
  printf("\nDOBRO DE CADA VALOR: \n");
   for(i = 0; i < 5; i++){
    printf("|%i|\n", *(ponteiro + i) * 2);
 }

}

int main(void){
setlocale(LC_ALL, "portuguese");

int vetor[5], i;

preencheVetor(vetor, i);
imprimeVetor(vetor, i);
somandoCadaPosicao(vetor, i);


system("pause");
return 0;
}
