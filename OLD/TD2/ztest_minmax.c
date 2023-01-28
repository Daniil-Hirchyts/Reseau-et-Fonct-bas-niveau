#include<stdio.h>
#include "minmax.h"
#define SIZE 8

int main(void)
{
	int pmin, pmax;
    int t[SIZE] = {1, 2, -3, 44, 7, 5, 6, 7};
	minmax(t, SIZE, &pmin, &pmax);
    printf("%d, %d\n", pmin, pmax);

}