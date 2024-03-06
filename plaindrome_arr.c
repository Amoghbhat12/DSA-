#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(int x) {
    long int rev = 0;
    int num = x;
    while (x > 0) {
        rev = (rev * 10) + (x % 10);
        x = x / 10;
    }
    return (rev == num);
}

int main() {
    int val;
    printf("Enter a value: ");
    scanf("%d", &val);

    bool result = isPalindrome(val);

    printf("%d\n", result);

    return 0;
}
