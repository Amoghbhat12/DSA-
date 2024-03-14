#include <stdio.h>
#include <stdlib.h>

int CompareIntegers(const void *a, const void *b) {
    return (*(int *)a) - (*(int *)b);
}

int main() {
    int nums[] = {5, 21, 3, 47, 11, 9, 32, 18, 1, 7, 25, 40, 6, 14, 28, 53, 37,
                  48, 22, 13, 45, 2, 29, 4, 41, 19, 8, 50, 24, 16, 33, 12, 51,
                  10, 46, 17, 38, 49, 26, 31, 15, 35, 27, 52, 23, 36, 42, 20, 44,
                  30, 43, 34, 39};

    size_t numsSize = sizeof(nums) / sizeof(nums[0]);

    qsort(nums, numsSize, sizeof(nums[0]), CompareIntegers);

    for (size_t i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
        if (i < numsSize - 1) {
            printf(" ");
        }
    }

    return 0;
}

