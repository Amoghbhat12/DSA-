long long* distance(int* nums, int numsSize, int* returnSize){
long long* arr = (long long*)malloc(numsSize * sizeof(long long));

    for (int i = 0; i < numsSize; i++) {
        arr[i] = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                arr[i] += llabs(i - j);
            }
        }
    }

    *returnSize = numsSize;
    return arr;

}
