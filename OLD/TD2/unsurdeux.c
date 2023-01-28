#include <stdlib.h>
int* unsurdeux(int* tab,int n)
{
	int j = 0;
	int* tab2;
	tab2 = malloc(sizeof(int) *n);
    for (int i = 0; i < n; i++) {
		if (i % 2 == 0){
        	tab2[j] = tab[i];
			j++;
		}
    }

    return tab2;
}
