#include <stdio.h>
#include <stdlib.h>

int maxArea(int* height, int heightSize) {
    int i,j,p;
    int maxNumber=0;
    for(i=0;i<heightSize-1;i++){
        for(j=i+1;j<heightSize;j++){
            int h = height[i] < height[j] ? height[i] : height[j];
            int w = j-i;
            p=h*w;
        }
                if (p > maxNumber) {
                        maxNumber = p;
 }
}
    return maxNumber;
}
int main(){
int arr[100],N;
scanf("%d",&N);
printf("arreay:");
 for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
    }
 int a =  maxArea(arr,N);
 printf("%d",a);
}
