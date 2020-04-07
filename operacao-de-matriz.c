#include <stdio.h>

int n;

void printMatrix(int A[n][n]) {
    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            printf("%d ", A[row][column]);
        }
        printf("\n");
    }
}

int main() {

    int operation;

    printf("Digite o tamanho da matriz (ex: 2 p/ 2x2, 3 p/ 3x3, ...): ");
    scanf("%d", &n);

    int matrizA[n][n];
    int matrizB[n][n];
    int matrizR[n][n];

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            printf("Digite o elemento %i da matriz A: ", row);
            scanf("%d", &matrizA[row][column]);
        }
    }

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            printf("Digite o elemento %i da matriz B: ", row);
            scanf("%d", &matrizB[row][column]);
        }
    }

    printf("\n1.Soma de matrizes\n2.Subtração de matrizes\n3.Multiplicação de matrizes\n");
    printf("\nEscolha a operação a ser realizada: ");
    scanf("%d", &operation);

    if (operation == 1) {
        for (int row = 0; row < n; row++) {
            for (int column = 0; column < n; column++) {
                matrizR[row][column] = matrizA[row][column] + matrizB[row][column];
            }
        }        
    }
    else if (operation == 2) {
        for (int row = 0; row < n; row++) {
            for (int column = 0; column < n; column++) {
                matrizR[row][column] = matrizA[row][column] - matrizB[row][column];
            }
        }  
    }
    else if (operation == 3) {
        for (int row = 0; row < n; row++) {
            for (int column = 0; column < n; column++) {
                // matrizR[row][column] = 
            }
        } 
    }

    printf("Matrix A\n");
    printMatrix(matrizA);
    printf("\n");

    printf("Matrix B\n");
    printMatrix(matrizB);
    printf("\n");
    
    printf("Matrix Resultado\n");
    printMatrix(matrizR);
    printf("\n");

    return 0;
}