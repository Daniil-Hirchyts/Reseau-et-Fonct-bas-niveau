#include <stdio.h>
#include <stdlib.h>

int palindrome(char *s) {
    char *end = s;
    while (*end) end++;
    end--;
    while (s < end) {
        if (*s != *end)

            return 0;
        s++;
        end--;
    }

    return 1;
}


int main() {
    char *s = malloc(100);

    printf("Enter word: ");
    scanf("%s", s);


    if (palindrome(s))
        printf("Palindrom");
    else
        printf("Not palindrom");

    return 0;
}