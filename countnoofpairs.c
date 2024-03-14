 int countKDifference(int* nums, int numsSize, int k) {
 int hash[101] = {0};
    for (int i = 0; i< numsSize; i++)
    {
        hash[nums[i]] = hash[nums[i]] + 1;
    }
    int a = 0;
    for (i = 0; i< numsSize; i++)
    {
         a = nums[i] - k;
         if (a<=0)
             continue;
         if(hash[a] >= 1)
             count = count + hash[a];
    }
    return count;
 }
