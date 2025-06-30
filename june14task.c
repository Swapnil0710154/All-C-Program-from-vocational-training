//Function to print Fibonacci series up to n terms
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

//Function to swap two numbers using call by reference
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