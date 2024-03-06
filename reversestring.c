#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a = 0;
    char arr[100];

    printf("Enter a string: ");
    scanf("%99s", arr); //buffer overflow
    int b = strlen(arr) - 1;
    printf("Length of the string: %d\n", b);

    while (a <= b) {
        char temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
    printf("Reversed string: %s\n", arr);
    return 0;
}
