#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int N;
    int a=0, b=1;
    int c, i;
    printf("Enter upper limit of range: ");
    scanf("%d", &N);
    printf("%d\n%d\n", a, b);
    for (i=1; c<N; i++)
    {
        c = a+b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}
