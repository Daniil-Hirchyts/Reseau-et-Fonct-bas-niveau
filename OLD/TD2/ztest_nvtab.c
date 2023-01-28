#include <stdio.h>
#include <stdlib.h>
#include "nvtab.h"
#define SIZE 5

int main(void) 
{
	int tab2[SIZE];
	int tab[SIZE] = {1, 3, 5, 6, 7};
	nvtab(tab, SIZE);
	return 0;
}