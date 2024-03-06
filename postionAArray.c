#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///6 ) Find First and Last Position of Element in Sorted


int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int i, k = 0;
    int* arr = malloc(numsSize * sizeof(int));

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            arr[k] = i;
            k++;
        }
    }

    if (k == 0) {
        *returnSize = 2;
        int* notFoundArr = malloc(2 * sizeof(int));
        notFoundArr[0] = -1;
        notFoundArr[1] = -1;
        return notFoundArr;
    }

    *returnSize = k;
    return arr;
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int* arr = malloc(N * sizeof(int));

    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target value to search for: ");
    scanf("%d", &target);

    int returnSize;
    int* result = searchRange(arr, N, target, &returnSize);

    printf("Result: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }

    free(arr);
    free(result);

    return 0;
}
