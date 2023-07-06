

void menu(){
   printf("\n1 - SOMA");
   printf("\n2 - SUBTRAÇÃO");
   printf("\n3 - MULTIPLICAÇÃO");
   printf("\n4 - DIVISÃO");
   printf("\n5 - POTENCIAÇÃO");
   printf("\n6 - RAIZ");
   printf("\n7 - RAIZ DE QUALQUER INDICE E BASE\n");
}

float escrevaNumero(){
  float num1;
  printf("Digite um número: ");
  scanf("%f", &num1);
  return num1;
}

float escrevaNumero2(){
 float num2;
 printf("Digite um número: ");
 scanf("%f", &num2);
 return num2;
}

float calculaValores(int *alternativa, float *resultado, int *expoente, float *num1, float *num2, int *indice){
   printf("\nEscolha uma alternativa: \n");
   scanf("%i", &*alternativa);

   switch(*alternativa){
    case 1:
      *num1 = escrevaNumero(num1);
      *num2 = escrevaNumero2(num2);
      *resultado = (*num1) + (*num2);
      printf("\nA soma de %.2f + %.2f = %.2f\n", *num1, *num2, *resultado);
      break;


    case 2:
      *num1 = escrevaNumero(num1);
      *num2 = escrevaNumero2(num2);
     *resultado = (*num1) - (*num2);
     printf("\nA subtração de %.2f + %.2f = %.2f\n", *num1, *num2, *resultado);
     break;


    case 3:
      *num1 = escrevaNumero(num1);
      *num2 = escrevaNumero2(num2);
     *resultado = (*num1) * (*num2);
     printf("\nA multiplicação de %.2f x %.2f = %.2f\n", *num1, *num2, *resultado);
     break;


    case 4:
      *num1 = escrevaNumero(num1);
      *num2 = escrevaNumero2(num2);
     *resultado = (*num1) / (*num2);
     printf("\nA divisão de %.2f / %.2f = %.2f\n", *num1, *num2, *resultado);
     break;



    case 5:
     *num1 = escrevaNumero(num1);
     printf("Digite o expoente: ");
     scanf("%i", &*expoente);
     *resultado = pow(*num1, *expoente);
     printf("\nA potenciação de %.2f^%i = %.2f\n", *num1, *expoente, *resultado);
     break;



    case 6:
     *num1 = escrevaNumero(num1);
     *resultado = sqrt(*num1);
     printf("\nA raiz quadrada de %.2f = %.2f\n", *num1, *resultado);
     break;



    case 7:
     *num1 = escrevaNumero(num1);
     printf("Digite o indice da raiz: ");
     scanf("%i", &*indice);
     *resultado = pow(*num1, 1.0/ *indice);
     printf("\nA raiz do número %.2f de indice %i = %.2f\n", *num1, *indice, *resultado);
     break;

    default:
     printf("OPÇÃO INVÁLIDA!!!!!\n");
     printf("DIGITE NOVAMENTE!\n\n");
     break;
   }

}


