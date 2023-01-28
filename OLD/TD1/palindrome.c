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
 
