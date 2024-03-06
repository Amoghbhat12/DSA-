#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int reverse(int x) {
    // Convert the integer to a string
    char arr[64];
    sprintf(arr, "%d", x);

    // Find the length of the string
    int len = strlen(arr);

    // Handle negative numbers
    int start = (arr[0] == '-') ? 1 : 0;

    // Reverse the string
    int a = start;
    int b = len - 1;
    while (a < b) {
        char temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }

    // Convert the reversed string back to an integer
    long long result = atoll(arr); // Using long long to handle potential overflow

    // Check for integer overflow
    if (result > INT_MAX || result < INT_MIN) {
        return 0;
    }

    return (int)result;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int reversed = reverse(num);

    printf("Reversed integer: %d\n", reversed);

    return 0;
}

