
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int maxProfit(int* prices, int pricesSize) {
    if (prices == NULL || pricesSize < 2) {
        return 0;
    }

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < pricesSize; ++i) {
        minPrice = (prices[i] < minPrice) ? prices[i] : minPrice;
        int currentProfit = prices[i] - minPrice;
        maxProfit = (currentProfit > maxProfit) ? currentProfit : maxProfit;
    }

    return maxProfit;
}
int main(){
int arr[100],N;
scanf("%d",&N);
printf("arreay:");
 for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
    }
int a=maxProfit(arr,N);
printf("%d",a);

}
