#include <stdio.h>

void elementosCalculo(){

  int i;

  printf("\nEscolha a operação a ser calculada\n\n 1. SOMA == n1 + n2;\n 2. SUBTRAÇÃO == n1 - n2;\n 3. MULTIPLICAÇÃO == n1 * n2;\n 4. DIVISÃO == n1 / n2.\n");
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

} 

void main(){

  printf("\n______________CALCULADORA______________\n");

    char c;
    do{
      elementosCalculo();
      printf("\nPara desejar continuar? S/n\n");
      scanf(" %c", &c);
    } while(c == 's' || c == 'S');
  
}