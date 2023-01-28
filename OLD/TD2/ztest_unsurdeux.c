#include <stdio.h>
#include <stdlib.h>
#include "unsurdeux.h"
#define SIZE 5
#define SIZE2 3


int main(void) 
{
	int tab2[SIZE2];
	int tab[SIZE] = {1, 3, 5, 6, 7};
	printf("%p\n", unsurdeux(tab, SIZE));
}