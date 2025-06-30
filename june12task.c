//str conccatinate
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2); // Concatenates str2 to str1
    printf("Concatenated String: %s\n", str1);

    printf("Length of str1: %lu", strlen(str1));

    return 0;
}

//getput
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("enter your full name\n");
    gets(name);

    printf("your name is ");
    puts(name);
}