#include <stdio.h>

void main(){
    int limite, num, big;
    
    printf("\nVamos brincar com alguns valores!\n\nDigite um inteiro que represente a quantidade de números que você deseja inserir: ");
    scanf("%d", &limite);

    printf("\nDigite %d números e pressione ENTER a cada entrada: \n", limite);
    while (limite > 0){
            scanf("%d", &num);
            if(num > big){
                big = num;
        } limite--;
    }
    printf("O maior número é %d\n", big);
}