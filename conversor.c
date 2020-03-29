#include <stdio.h>

void main(){

  float fahrenheit, celsius;
  
  printf("\nDigite a temperatura em Fahrenheit: ");
  scanf("%f", &fahrenheit);
  printf("\nTemperatura em Fahrenheit: %f.\n", fahrenheit);
 
  celsius = ((5*(fahrenheit-32))/9); 
  printf("\nTemperatura em Celsius: %f.\n", celsius);

}
