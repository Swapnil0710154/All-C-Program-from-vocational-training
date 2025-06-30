//Linear search
#include <stdio.h>
int main()
{
    printf("enter 5 element in array\n");
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int flag = 0;
    int key = 5;
    printf("enter the value of key\n");
    scanf("%d", &key);
    for (int i = 0; i < 5; i++)
    {
        if (key == a[i])
        {
            flag = 1;
        }
    }
    if (flag)
    {
        printf("Element is present in array");
    }
    else
    {
        printf("Element is not present in array");
    }
}

//binary search
#include <stdio.h>
#include<stdlib.h>
int main()
{
    // variable decalration
    int n, a[10], key, min, max, mid;

    // element entry
    printf("Enter the number of element\n");
    scanf("%d", &n);
    printf("enter the value of element\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // key value
    printf("enter the vlaue of key element\n");
    scanf("%d", &key);

    // searching part
    min = 0;
    max = n - 1;
    while (min <= max)
    {
        mid = (min + max) / 2;
        if (a[mid] == key)
        {
            printf("the key is at index %d", mid);
            exit(0);
        }
        else if (key < a[mid])
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    printf("key not found");
}

//Bubble sort
#include <stdio.h>
#include <unistd.h>
int main()
{

    // variable declaration
    int array[10], num, temp;

    // number of element entry
    printf("Enter the number of element in array\n");
    scanf("%d", &num);

    // element entry
    printf("Enter the element of array\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    // sorting part
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1; j++)
        {
            if (array[j] >= array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    // printing part
    printf("The sorted array is given below\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
        sleep(1);
    }
}

//Selection sort
#include <stdio.h>
#include <unistd.h>
int main()
{
    int arr[10], num, min, temp;
    printf("enter the number of elements in array");
    scanf("%d", &num);
    printf("enter the elements of array\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < num; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("the shorted array is given below\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", arr[i]);
        sleep(1);
    }
}