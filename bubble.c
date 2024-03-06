#include <stdio.h>
#include <stdlib.h>
void sort012(int* a,int N){
for(int i =0;i<N;i++){
    for(int j=0;j<N;j++){
        if(a[i]>a[j]){
           int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
}
void printArray(int arr[], int arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++)
		printf("%d ", arr[i]);
}
int main()
{int arr[100],N;
scanf("%d",&N);
printf("arreay:");
 for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
    }
    sort012(arr,N);
    printArray(arr,N);
}
