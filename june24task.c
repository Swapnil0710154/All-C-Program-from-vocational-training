//Malloc Example
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); // memory allocated using malloc
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements of array: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum=%d", sum);
    free(ptr);
    return 0;
}

//malloc with string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char name[100];
    char *description;
    strcpy(name, "Zara Ali");
    /* allocate memory dynamically */
    description = malloc(200 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
}
// Calloc Example
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements of array: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum=%d", sum);
    free(ptr);
    return 0;
}

//Realloc Example
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i, n1, n2;
    printf("Enter size of array: ");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    printf("Address of previously allocated memory: ");
    for (i = 0; i < n1; ++i)
        printf("%u\t", ptr + i);
    printf("\nEnter new size of array: ");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2);
    for (i = 0; i < n2; ++i)
        printf("%u\t", ptr + i);
    return 0;
}

//Memory
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));

    if (p == NULL)
    {
        printf("Memory not allocated ");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);
    return 0;
}
