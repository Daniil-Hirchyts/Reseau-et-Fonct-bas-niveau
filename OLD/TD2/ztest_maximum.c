#include<stdio.h>
#include "maximum.h"
#define SIZE 8

int main(void)
{
    int t[SIZE] = {1, 2, 3, 44, 7, 5, 6, 7};
    printf("%d\n", maximum(t, SIZE));
}