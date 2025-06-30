//Expressions using pointer
#include <stdio.h>
int main()
{
    int a, b, c = 10;
    int *p;
    a = 4 * (c + 5);
    p = &c;
    b = 4 * (*p + 5);
    printf("a = %d and b = %d", a, b);
}

//Pointer and address demonstrations
#include <stdio.h>
int main()
{
    int x = 5;
    int y, *ptr;
    ptr = &x;
    y = *ptr;

    printf("%d is stored in location %u \n", x, &x);
    printf("%d is stored in location %u \n", *&x, &x);
    printf("%d is stored in location %u \n", *ptr, ptr);
    printf("%d is stored in location %u \n", y, &*ptr);
    printf("%d is stored in location %u \n", ptr, &ptr);
    printf("%d is stored in location %u \n", y, &y);
    *ptr = 25;

    printf("now x = %d\n ", x);
}