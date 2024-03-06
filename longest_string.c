#include <stdio.h>
#include <stdlib.h>
int lengthOfLongestSubstring(char* s) {
      int arr[128], i , start = - 1, maxLen = 0;

    for (i = 0; i < 128; i++) arr[i] = -1;

    i = 0;
    while(s[i]){
        if (arr[s[i]] > start)
            start = arr[s[i]];

        if(i - start > maxLen)
            maxLen = i - start;

        arr[s[i]] = i;
        i++;
    }

    return maxLen;
}
int main(){
char s[100];
scanf("%s",&s);
int a=lengthOfLongestSubstring(s);
printf("%d",a);
}
