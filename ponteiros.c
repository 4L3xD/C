# include <stdio.h>
# include "vector.c"

void main(){
    int a;
    printf("Endereco em hexadecimal: %x, Valor: %d, Valor: %d\n", &a, a, *(&a));
    printf("Valor do próximo endereço na memória: %d\n", *(&a+sizeof(int)));

    // int* b = (int*)999999; // Isso da segmentation fault pois nao temos acesso a esse endereco
    // int* b = &a + 1000; // Pode dar errado se o endereco de A estiver no fim da stack
    int* b = malloc(1);
    printf("endereco reservado: %x\n", b);
    b[10] = 99999;
    printf("valor: %d\n", b[10]);

    // &b -> int** | B aponta para um INT, ou seja b é do tipo int*, entao o endereço de b tem um valor que aponta para um INT ou seja ele é int**
    // *(&b) -> int* 

    // valor de b é endereço de a
    // b = &a;

    // printf("b: %x, valor no endereco que b aponta: %d\n", b, *b);

    Vector* v = createVector();
    pushVector(v, 20);
    pushVector(v, 22);
    pushVector(v, 24);
    printVector(v);

    // reserva espaços da RAM infitamente    
    // while(1) {
    //     malloc(10);
    // }

    free(v);
}
