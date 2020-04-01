#include <stdlib.h>

typedef struct Vector {
    int size;
    int* elements;
} Vector;

Vector* createVector() {
    Vector* v = (Vector*)malloc(sizeof(Vector));
    v->size = 0; // == (*v).size = 0;
    v->elements = (int*)malloc(sizeof(int));
    return v;
}

void pushVector(Vector* v, int value) {
    v->elements = (int*)realloc(v->elements, sizeof(int) * (v->size+1));
    v->elements[v->size] = value;
    v->size++;
}

void printVector(Vector* v){
    for(int i = 0; i < v->size; i++){
        printf("%i ", v->elements[i]);
    }
}

void freeVector(Vector* v) {
    free(v);
}

// void printArray(int* vector, int size){
//     for(int i = 0; i < size; i++){
//         printf("\nElemento %i do vetor: %i\n", i, vector[i]);
//     }
// }