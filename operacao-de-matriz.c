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

    scanf("%d %d", &n, &n);

    int matrizA[n][n];
    int matrizB[n][n];
    int matrizR[n][n];

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            scanf("%d", &matrizA[row][column]);
        }
    }

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            scanf("%d", &matrizB[row][column]);
        }
    }

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