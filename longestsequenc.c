
int CompareIntegers(const void *a, const void *b) {
    return (*(int *)a) - (*(int *)b);
}

int longestConsecutive(int* nums, int numsSize) {
    if (numsSize <= 1) {
        return numsSize;
    }

    int longestSequence = 1;
    int currentSequence = 1;

    qsort(nums, numsSize, sizeof(nums[0]), CompareIntegers);

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] != nums[i + 1]) {
            if (nums[i] + 1 == nums[i + 1]) {
                currentSequence++;
            } else {
                longestSequence = (currentSequence > longestSequence) ? currentSequence : longestSequence;
                currentSequence = 1;
            }
        }
    }

    longestSequence = (currentSequence > longestSequence) ? currentSequence : longestSequence;

    return longestSequence;
}
