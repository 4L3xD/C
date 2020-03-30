#include <stdio.h>

void main(){
    int count, initialLim, limit, num, big, small = 0;
    float media = 0;
    
    printf("\nVamos brincar com alguns valores!\n\nDigite um inteiro que represente a quantidade de números que você deseja inserir: ");
    scanf("%i", &limit);

    printf("\nDigite %i números e pressione ENTER a cada entrada. \n", limit);
    
    initialLim = limit;
    for(int i = 0; i < limit; i++){
        printf("\nDigite um valor: ");
        scanf("%d", &num);
        printf("\n Valor %i: %d\n", i+1, num);
        if(num > big){
            big = num;
        }
        if(num < small){
            small = num;
        }
        int sum = 0;
        sum = sum+num;
        media = sum/initialLim;
    }
    printf("\nO maior número é: %d\n", big);
    printf("\nO menor número é: %d\n", small);
    printf("\nA média dos números é: %d\n", media);

}