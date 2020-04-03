# include <stdio.h>
# include <stdbool.h>

void scanArray(int* vector, int i){
    bool equal = false;

    do {
        if (equal == true) printf("Digite um número diferente dos anteriores!\n");
        equal = false;

        scanf("%d", &vector[i]);

        for (size_t j = 0; j < i; j++){
            if(vector[i] == vector[j]){
                equal = true;
            }
        }
    } while (equal == true);
}

void printArray(int* vector, int size){
    for(int i = 0; i < size; i++){
        printf("\nElemento %i do vetor: %i\n", i, vector[i]);
    }
}

void main(){
    int vector[10];

    printf("\nVamos armazenar valores em um vetor.\nVocê deve inserir 10 números diferentes, que é o tamanho de nosso array.\n");

    for (size_t i = 0; i < 10; i++){   
        printf("Digite um número inteiro, em seguida pressione ENTER: \n");
        scanArray(vector, i);
    }
    printArray(vector, 10);
}