#include <stdio.h>

int main(){

  printf("\n______CALCULADORA__BINARIA______\n");
  printf("\nEscolha a operação a ser calculada\n\n 1. SOMA == n1 + n2;\n 2. SUBTRAÇÃO == n1 - n2;\n 3. MULTIPLICAÇÃO == n1 * n2;\n 4. DIVISÃO == n1 / n2.\n");

  int i;
  printf("\nDigite o número correpondente a operação escolhida: \n");
  scanf("%i", &i);

  float n1, n2, result;
  printf("\nEscolha o primeiro número da operação: \n");
  scanf("%f", &n1);
  printf("Escolha o segundo número da operação: \n");
  scanf("%f", &n2);

  switch (i){
    case 1:    
      printf("SOMA: %f.\n", n1+n2);
      break;
    case 2:
      printf("SUBTRAÇÃO: %f.\n", n1-n2);
      break;
    case 3:
      printf("MULTIPLICAÇÃO: %f.\n", n1*n2);
      break;
    case 4:
      printf("DIVISÃO: %f.\n", n1/n2);
      break;
  } 

  return 0;
}
