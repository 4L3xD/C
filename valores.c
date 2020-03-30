#include <stdio.h>

void main(){
    int limit, num, big, small = num, sum = 0;
    float media = 0;
    
    printf("\nVamos brincar com alguns valores!\n\nDigite um inteiro que represente a quantidade de números que você deseja inserir: ");
    scanf("%i", &limit);

    printf("\nDigite %i números e pressione ENTER a cada entrada. \n", limit);
    printf("___________________________________________________\n");
    
    for(int i = 0; i < limit; i++){
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &num);
        printf("\n Valor %i: %d\n", i+1, num);
        if(num > big){
            big = num;
        }
        if(num < small){
            small = num;
        }
        sum = sum+num;
        media = (float)sum/limit;
        printf("\nSoma dos números inseridos: %i\n", sum);
        printf("\n___________________________________________________\n");
    }
    printf("\nO maior número é: %d\n", big);
    printf("\nO menor número é: %d\n", small);
    printf("\nA média dos números é: %.2f\n\n", media);
}