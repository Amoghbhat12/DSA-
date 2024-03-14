#include <stdbool.h>

bool searchMatrix(int** mat, int matSize, int* matColSize, int t) {
    int r = 0;
    int c = *matColSize - 1;

    while (c >= 0 && r < matSize) {
        if (mat[r][c] == t) {
            return true;
        }

        if (mat[r][c] < t) {
            r++;
        } else {
            c--;
        }
    }

    return false;
}
