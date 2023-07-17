#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Elabore uma função que receba duas strings como parâmetros e verifique se
a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar
os caracteres das strings.
*/

int verificaString(char *string1, char *string2) {
    char *ponteiro1 = string1;
    char *ponteiro2 = string2;
    char *aux;

    //Enquanto a string1 não tem fim!
    while(*ponteiro1 != '\0'){
        //Verifica inicialmente a presença de alguma letra igual!
        if(*ponteiro1 == *ponteiro2){
            //útil para não perder o valor original do ponteiro!
            aux = ponteiro1;
            //Neste while é feita a verificação utilizando uma variável auxiliar
            while (*ponteiro2 != '\0' && *aux == *ponteiro2){
                aux++;
                ponteiro2++;
            }
            //Se a segunda string chegou ao seu fim, significa que existe uma semelhança entre as duas!
            if (*ponteiro2 == '\0'){
                return 1;
            }
            ponteiro2 = string2;
        }
        ponteiro1++;
    }

    return 0;
}


int main(void){
setlocale(LC_ALL, "portuguese");

char string1[200];
char string2[200];


printf("\nDigite uma palavra: ");
fgets(string1, sizeof(string1), stdin);
string1[strcspn(string1, "\n")] = '\0';

printf("\nDigite uma palavra: ");
fgets(string2, sizeof(string2), stdin);
string2[strcspn(string2, "\n")] = '\0';


printf("%s\n", string1);
printf("%s\n", string2);

if(verificaString(string1, string2)){
    printf("Uma string está presente na outra!");
}else{
    printf("Não é possível encontrar nenhuma das strings dentro da outra!");
}


return 0;
}

