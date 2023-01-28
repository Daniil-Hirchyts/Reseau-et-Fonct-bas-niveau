#include <stdio.h>

int main() {
    printf("The first hundred without d3 and d7:");

    for (int i = 1; i <= 100; i++) {

        if (i % 3 == 0 || i % 7 == 0) {
        } else
            printf(" %i", i);
    }

    return 0;
}
