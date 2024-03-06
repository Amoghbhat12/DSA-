
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int i, j, k;
    int arr[10][3];
    int a = 0;

    for (i = 0; i < numsSize - 2; i++) {
        for (j = i + 1; j < numsSize - 1; j++) {
            for (k = j + 1; k < numsSize; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    arr[a][0] = nums[i];
                    arr[a][1] = nums[j];
                    arr[a][2] = nums[k];
                    a++;
                }
            }
        }
    }


    *returnSize = a;

    *returnColumnSizes = (int*)malloc(a * sizeof(int));
    for (i = 0; i < a; i++) {
        (*returnColumnSizes)[i] = 3;
    }

    int** result = (int**)malloc(a * sizeof(int*));
    for (i = 0; i < a; i++) {
        result[i] = (int*)malloc(3 * sizeof(int));
        for (j = 0; j < 3; j++) {
            result[i][j] = arr[i][j];
        }
    }

    return result;
}

