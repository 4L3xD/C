#include <stdio.h>

void main() {
  
  char nome [15];
  float altura, imc, peso;

  printf("\nOlá, qual é o seu nome? ");
  scanf("%s", nome);
  printf("\nVamos cálcular seu IMC!\n");
  
  printf("\n%s, digite sua altura. \nUtilize ponto ao invés de vírgula para separar metros de centímetros: ", &nome);
  scanf("%f", &altura);

  printf("\nAgora digite seu peso, %s: ", nome);
  scanf("%f", &peso);

  imc = peso/(altura*altura);
  printf("\nSeu IMC é: %f", imc);

    if (imc >= 50){
      printf("\n %s, você se enquadra no perfil de obesidade mórbida. Precisamos mudar o estilo de vida, começando pela sua autoestima!\n", nome); 
    } else if (imc >= 40.0){
      printf("\n %s, você se enquadra no perfil de obesidade severa. Precisamos mudar seus hábitos, começando por experiências mais qualitativas!\n", nome);
    } else if (imc >= 35.0){
      printf("\n %s, você se enquadra no perfil de obesidade moderada. Precisamos repensar hábitos alimentares!\n", nome);
    } else if (imc >= 30.0){
      printf("\n %s, você se enquadra no perfil de obesidade. Precisamos praticar exercícios físicos!\n", nome);
    } else if (imc >= 25.0){
      printf("\n %s, você se enquadra no perfil de sobrepeso. Com uma rotina alimentar e esportiva adequada transformaremos gordurinhas em músculos!\n", nome);
    } else if (imc >= 18.6){
      printf("\n %s, você se enquadra no perfil de peso normal. Parabéns, pratique exercícios e alimente-se com verduras, legumes e frutas para manter esse corpinho!\n", nome);
    } else {
      printf("\n %s, você está abaixo do peso. Busque ingerir mais fibras e dormir o suficiente. Evite hábitos como fumar e a ingestão de álcool.\nA natureza tem tudo que você precisa, alimente-se dela!\n", nome);
    }

}
