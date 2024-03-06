#include <stdio.h>
#include <stdlib.h>
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
   int numRows = matrixSize;
    int numCols = *matrixColSize;

    int zeroRows[numRows];
    int zeroCols[numCols];

    for (int i = 0; i < numRows; ++i) {
        zeroRows[i] = 0;
    }

    for (int j = 0; j < numCols; ++j) {
        zeroCols[j] = 0;
    }

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (matrix[i][j] == 0) {
                zeroRows[i] = 1;
                zeroCols[j] = 1;
            }
        }
    }

    for (int i = 0; i < numRows; ++i) {
        if (zeroRows[i]) {
            for (int j = 0; j < numCols; ++j) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < numCols; ++j) {
        if (zeroCols[j]) {
            for (int i = 0; i < numRows; ++i) {
                matrix[i][j] = 0;
            }
        }
    }
}
int main(){
    int matrix[100][100],N;
    printf("N:?");
    scanf("%d",&N);
 printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    setZeroes(matrix,N,N);

     for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", matrix[i][j]);
        }
                 printf("\n");

    }


}
