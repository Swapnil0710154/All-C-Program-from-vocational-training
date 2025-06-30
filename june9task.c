//maximum
#include <stdio.h>

int main() {
    int a[5];
    printf("Enter 5 elements of array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0]; // Fix: Start with first element
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("The maximum element in array is %d\n", max);
    return 0;
}

//Array
#include <stdio.h>
int main()
{
    // insert and display array element
    int i, n, a[10], sum = 0;
    printf("Enter the number of element \n");
    scanf("%d", &n);
    printf("enter the element \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the elements are ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        sum += a[i];
    }

    // sum of array element
    printf("\nthe sum of element is %d", sum);
}

//Fibonacci
#include <stdio.h>
int fibo(int a)
{
    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return fibo(a - 1) + fibo(a - 2);
    }
}
int main()
{
    int a, result;
    printf("enter the number for fibonachi series\n");
    scanf("%d", &a);

    result = fibo(a);
    printf("the sum of fibonachi series is %d\n", result);
}