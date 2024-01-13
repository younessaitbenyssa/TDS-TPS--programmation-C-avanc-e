#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j,z;

    printf("Enter n, the number of rows for the isosceles triangle: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < 2 * i - 1; j++) {
            printf(" ");
        }
        if (i > 0) {
            printf("*");
        }
        printf ("\n");
        if (i == n-1){
            for (z = 0 ; z<2*i+1 ; z++)
            printf ("*");
        }

        printf("\n");
    }

    return 0;
}
