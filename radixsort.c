#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}
void radixSort(int* nums, int numsSize) {
    int maxNum = nums[0];
    for (int i = 1; i < numsSize; i++) {
        maxNum = max(maxNum, nums[i]);
    }

    for (int exp = 1; maxNum / exp > 0; exp *= 10) {
        countingSort(nums, numsSize, exp);
    }
}
int main() {
    int nums[] = {3, 6, 9, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
        radixSort(nums, numsSize);

        for(int i =0;i<numsSize;i++){
            printf("%d ",nums);
        }}
