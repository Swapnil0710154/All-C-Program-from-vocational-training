#include<stdio.h>
//Q1. write a c program to print your name, roll no. ,and branch:
int main()
{
    printf("\n\n\n");
    long long roll_no = 301402222210;
    char name[] = "Swapnil Singh";
    char branch[] = "CSE";
    printf("I am %s and \n my roll no. is %lld and \n i am from %s branch. \n\n\n", name, roll_no, branch);

#include <stdio.h>
#include <unistd.h>
int main()
{
    sleep(2);
    printf("\n\n\n");
// Q2. write a program to enter two numbers as input and print the sum.
int first2, second2;
printf("Enter the two numbers which you want to add:\n");
scanf("%d %d", &first2, &second2);
printf("The sum of %d and %d is %d.\n\n\n", first2, second2, first2 + second2);

sleep(2);

//Q3. create a c program that check wether the number is positive, negetive, or zero.
int check;
printf("Enter the number which you want to check wether it is positive, negetive, or zero.\n");
scanf("%d", &check);
if (check == 0)
{
    printf("The number is equal to zero(0).");
}
else if (check<0)
{
    printf("The number(%d)is negetive", check);
}
else if (check>0)
{
    printf("The number(%d)is positive.", check);
}
else
{
    printf("Invalid number.");
}
printf("\n\n\n");

// Q4. write a c program to find greatest of two number.
int first4, second4;
printf("Enter the two numbers in which you want to find the greater number.\n");
scanf("%d %d", &first4, &second4);
if (first4 > second4)
{
    printf("%d is greater than %d", first4, second4);
}
else if (first4 < second4)
{
    printf("%d is greater than %d", second4, first4);
}
else if (first4 == second4)
{
    printf("%d is equal to %d", first4, second4);
}
else
{
    printf("Invalid");
}

//Q5. using switch case to display the day od week based on the input number(1 - 7).
int day;
printf("Enter the number of day in the week.");
scanf("%d",&day);
switch (day)
{
case 1:
   printf("Today is Sunday");
   break;
   case 2:
   printf("Today is Monday");
   break;
   case 3:
   printf("Today is Tuesday");
   break;
   case 4:
   printf("Today is Wednesday");
   break;
   case 5:
   printf("Today is Thursday");
   break;
   case 6:
   printf("Today is Friday");
   break;
   case 7:
   printf("Today is Saturday");
   break;
   default:
   printf("Invalid day dont you know there are only & days in a week!");
   break;
}

//Q6. write the program that takes age as input and check if the person is elegible to vote(age >= 18).
int age;
printf("Enter your age to check that you can cast vote or not.\n");
scanf("%d",&age);
if (age >= 18)
{
   printf("Elegible to vote because you are %d years old.",age);
}
else{
   printf("Not Elegible to vote because you are %d years old.",age);
}
printf("\n\n\n");

return 0;
}

// Q7. Explain the difference between '==' and '=' in C with Example.
printf("The '=' operator is an assigment operator which is used to assign a value to a variable.\nWhile the '==' opertor is a comparison 
printf("\n\nexample for == operator\n1 == 2 : 0(false)\n\n");
printf("example for = operator\na = 2 : printf('a') : 2\n");