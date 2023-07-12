#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha.
*/

typedef struct dadosPessoas{
  char nome[100];
  int data;
  int mes;
  int ano;
}dadosPessoas;

int main(void){
setlocale(LC_ALL, "portuguese");
int i, cont, j, aux;
char trocaNome[100];
dadosPessoas dadosP[6];

cont = 0;

for(i = 0; i < 6; i++){


  printf("Digite seu nome completo: ");
  fgets(dadosP[i].nome, sizeof(dadosP[i].nome), stdin);
  dadosP[i].nome[strcspn(dadosP[i].nome, "\n")] = '\0';

  //DIA
  printf("Digite a data do seu nascimento: ");
  scanf("%i", &dadosP[i].data);

  //MES
  printf("Digite o mês do seu nascimento: ");
  scanf("%i", &dadosP[i].mes);

  //ANO
  printf("Digite o ano do seu nascimento: ");
  scanf("%i", &dadosP[i].ano);

  printf("\n%s = %i/%i/%i\n", dadosP[i].nome, dadosP[i].data, dadosP[i].mes, dadosP[i].ano);
  getchar();
}

 //MAIS VELHO
 for(i = 0; i < 6; i++){
    if(dadosP[i].ano < dadosP[cont].ano){
        cont = i;
    }else if(dadosP[i].ano == dadosP[cont].ano){
          if(dadosP[i].mes < dadosP[cont].mes){
            cont = i;
          }else if(dadosP[i].mes == dadosP[cont].mes){
                if(dadosP[i].data < dadosP[cont].data){
                    cont = i;
                }
          }
    }
 }
 printf("\n %s é mais velho nascido em %i/%i/%i", dadosP[cont].nome, dadosP[cont].data, dadosP[cont].mes, dadosP[cont].ano);



 cont = 0;
 //MAIS NOVO
 for(i = 0; i < 6; i++){
    if(dadosP[i].ano > dadosP[cont].ano){
        cont = i;
    }else if(dadosP[i].ano == dadosP[cont].ano){
          if(dadosP[i].mes > dadosP[cont].mes){
            cont = i;
          }else if(dadosP[i].mes == dadosP[cont].mes){
                if(dadosP[i].data > dadosP[cont].data){
                    cont = i;
                }
          }
    }
 }
 printf("\n %s é mais novo nascido em %i/%i/%i", dadosP[cont].nome, dadosP[cont].data, dadosP[cont].mes, dadosP[cont].ano);




 //Acrescentado Idades em ordem!!!! Mais velho até o mais novo
 for(i = 0; i < 6; i++){
    for(j = 0; j < 6; j++){
      if(dadosP[i].ano < dadosP[j].ano || dadosP[i].ano == dadosP[j].ano && dadosP[i].mes < dadosP[j].mes
      || dadosP[i].ano < dadosP[j].ano && dadosP[i].mes == dadosP[j].mes && dadosP[i].data > dadosP[j].data){

        //Trocando nome!
        //Motivo do uso: é uma string que está sendo trocada!
        //Logo o strcpy  é fulcral para esse procedimento!
        strcpy(trocaNome, dadosP[i].nome);
        strcpy(dadosP[i].nome, dadosP[j].nome);
        strcpy(dadosP[j].nome, trocaNome);


        //Trocando ano!
        aux = dadosP[i].ano;
        dadosP[i].ano = dadosP[j].ano;
        dadosP[j].ano = aux;


        //Trocando mês!
        aux = dadosP[i].mes;
        dadosP[i].mes = dadosP[j].mes;
        dadosP[j].mes = aux;


        //Trocando dia
        aux = dadosP[i].data;
        dadosP[i].data = dadosP[j].data;
        dadosP[j].data = aux;



      }
    }
 }

 printf("\nIdades em ordem: \n");
for(i = 0; i < 6; i++){
 printf("%s = %i/%i/%i\n", dadosP[i].nome, dadosP[i].data, dadosP[i].mes, dadosP[i].ano);
}


system("pause");
return 0;
}
