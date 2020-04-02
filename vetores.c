# include <stdio.h>
#include <stdbool.h>

void printArray(int* vector, int size){
    for(int i = 0; i < size; i++){
        printf("\nElemento %i do vetor: %i\n", i, vector[i]);
    }
}

void main(){
    int vector[10];

    printf("\nVamos armazenar valores em um vetor.\nVocê deve inserir 10 números diferentes, que é o tamanho de nosso array.\n");

    for (size_t i = 0; i < 10; i++){
        bool equal = false;

        printf("Digite um número inteiro, em seguida pressione ENTER: \n");
        scanf("%d", &vector[i]);
        
        for (size_t j = 0; j < 10; j++){
            if(j != i && vector[i] == vector[j]){
            equal = true;
            }
        }
        if(equal == true){
            printf("Digite um número diferente dos anteriores!\n");
        }

    }
    printArray(vector, 10);
}