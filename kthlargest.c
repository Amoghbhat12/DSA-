#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Kth largest
int findKthLargest(int* nums, int numsSize, int k) {
    int i,j,temp;
    for(i=0;i<numsSize-1;i++){
        for(j=0;j<numsSize;j++){
            if(nums[i]<=nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    for( i=0;i<numsSize;i++){
            printf("%d ",nums[i]);
    }

    return nums[k-1];
}
int main(){
   int arr[100],N;
scanf("%d",&N);
printf("arreay:");
 for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
    }
 int p=findKthLargest(arr,N,4);
  printf("\n%d",p);
}
