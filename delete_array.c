#include <stdio.h>
#include <stdlib.h>
int removeElement(int* nums, int numsSize, int val)
{
    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }}

         for(int i=0;i<k;i++){
            printf("%d ",nums[i]);}
return k;
}
int main(){
    int n,val;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
    }
    printf("value:");
    scanf("%d",&val);
int a = removeElement(arr,n,val);
printf("\n%d",a);
}
