#include <stdio.h>

int main() {
    int i, j, m, n;
    int a[3][3], b[3][3], c[3][3];

    printf("Enter number of rows and columns (max 3x3): ");
    scanf("%d %d", &m, &n);

    printf("Enter 1st array elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2nd array elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix addition
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    printf("The sum of array elements is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
