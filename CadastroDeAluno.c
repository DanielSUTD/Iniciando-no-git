#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o n�mero de matr�cula do aluno, seu nome e as notas de tr�s provas.
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior m�dia
geral dentre os cinco.
*/


typedef struct nomeAluno{
 char nome[100];
}nomeAluno;

typedef struct matriculaAluno{
 char matricula[100];
}matriculaAluno;

typedef struct notaAluno{
  float nota1;
  float nota2;
  float nota3;
}notaAluno;

typedef struct armazenaDados{
  matriculaAluno matriculaA;
  nomeAluno nomeA;
  notaAluno notaA;
  float mediaGeral;
}armazenaDados;

int main(void){
setlocale(LC_ALL, "portuguese");


armazenaDados armazenaD[5];
int cont, i, maior, aux;

cont = maior = aux = 0;


do{
  printf("\n\nBEM VINDO!");
  printf("\nC�DIGO PARA COMPUTAR NOTAS DE ALUNOS!\n\n");

  //NOME
  printf("\nDigite o nome do aluno: ");
  fgets(armazenaD[cont].nomeA.nome, sizeof(armazenaD[cont].nomeA.nome), stdin);
  armazenaD[cont].nomeA.nome[strcspn(armazenaD[cont].nomeA.nome, "\n")] = '\0';

  //MATRICULA
  printf("\nDigite a matr�cula do aluno: ");
  fgets(armazenaD[cont].matriculaA.matricula, sizeof(armazenaD[cont].matriculaA.matricula), stdin);
  armazenaD[cont].matriculaA.matricula[strcspn(armazenaD[cont].matriculaA.matricula, "\n")] = '\0';


  //NOTA
  printf("Digite a nota deste aluno na 1 prova: ");
  scanf("%f", &armazenaD[cont].notaA.nota1);
  printf("Digite a nota deste aluno na 2 prova: ");
  scanf("%f", &armazenaD[cont].notaA.nota2);
  printf("Digite a nota deste aluno na 3 prova: ");
  scanf("%f", &armazenaD[cont].notaA.nota3);

  armazenaD[cont].mediaGeral = (armazenaD[cont].notaA.nota1 + armazenaD[cont].notaA.nota2 + armazenaD[cont].notaA.nota3) / 3;


  printf("\nO aluno/aluna %s", armazenaD[cont].nomeA.nome);
  printf("\nMatr�cula: %s", armazenaD[cont].matriculaA.matricula);
  printf("\nMedia geral do aluno %s �: %f", armazenaD[cont].nomeA.nome, armazenaD[cont].mediaGeral);

  getchar();


  //Contando o n�mero de alunos;
  cont++;
}while(cont != 4);


    for(i = 0; i < cont; i++){
       if(armazenaD[i].mediaGeral > maior){
         maior = armazenaD[i].mediaGeral;
         aux = i;
       }
    }

    printf("Matr�cula: %s", armazenaD[aux].matriculaA.matricula);
    printf("O aluno/aluna %s tem a maior m�dia geral: %f", armazenaD[aux].nomeA.nome, armazenaD[aux].mediaGeral);


system("pause");
return 0;
}
