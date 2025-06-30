// Swap function
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("the value of a = %d and b = %d\n", a, b);
    swap(&a, &b);

    printf("After swap the value of a = %d and b = %d\n", a, b);
}

#include <stdio.h>

// Function prototype (modern declaration)
float avg(int array[], int size);
void swap(int *x, int *y);

int main() {
    int x[100], k, n;
    int a = 5, b = 20;

    // --- Swap Demo ---
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap:  a = %d, b = %d\n\n", a, b);

    // --- Array Average ---
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (k = 0; k < n; k++)
        scanf("%d", &x[k]);

    printf("Average is %.2f\n", avg(x, n));

    return 0;
}

// Function to calculate average of array elements
float avg(int array[], int size) {
    int *p, i, sum = 0;
    p = array;

    for (i = 0; i < size; i++)
        sum += *(p + i);

    return (float)sum / size;
}