#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    if (n%2 == 0)
        n = n+1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else if (j == i || i + j == n - 1)
                printf("+ ");
            else if (j == n / 2 && i != n / 2)
                printf("- ");
            else if (i == n / 2 && j != n / 2)
                printf("| ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
