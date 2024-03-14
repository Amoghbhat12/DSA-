
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i = i + 6)
        if (num % i == 0 || num % (i + 2) == 0) return false;

    return true;
}

int diagonalPrime(int** nums, int numsSize, int* numsColSize) {
    int maxPrime = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsColSize[i]; j++) {
            if (i == j || i + j == numsSize - 1) {
                if (isPrime(nums[i][j]) && nums[i][j] > maxPrime) {
                    maxPrime = nums[i][j];
                }
            }
        }
    }

    return maxPrime;
}
}
