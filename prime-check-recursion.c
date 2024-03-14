#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int check_prime(int i,int num);
int main()
{   int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (check_prime(2,num)==0)
       printf("Prime");
    else
        printf("Not Prime");
}
int check_prime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
        return 1;
    else{
        return check_prime(i+1,num);
    }
}
