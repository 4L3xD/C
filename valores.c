#include <stdio.h>

void main(){
    int count, initialLim, limit, num, big, small;
    float media;
    
    printf("\nVamos brincar com alguns valores!\n\nDigite um inteiro que represente a quantidade de números que você deseja inserir: ");
    scanf("%i", &limit);

    printf("\nDigite %i números e pressione ENTER a cada entrada. \n", limit);
    
    initialLim = limit;
    while (limit > 0){
        for(int i = 1; count != initialLim; i++){
            count++;
            printf("\nDigite um valor: ");
            scanf("%d", &num);
            printf("\n Valor %i: %d\n", i, num);
            if(num > big){
                big = num;
            }
        limit--;
        }
    }
    printf("\nO maior número é: %d\n", big);
    printf("\nO menor número é: %d\n", small);
    printf("\nA média dos números é: %d\n", media);

}