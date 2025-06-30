#include <stdio.h>

int main()
{
    // Q1. Fahrenheit to Celsius Conversion:
    float deg, fer;
    printf("Enter the Value in fahrenhaite\n");
    scanf("%f", &fer);
    deg = (fer - 32) * 5 / 9;
    printf("celcius = %f\n", deg);

    // Q2.Integer Division with Float Result:
    int a, b;
    printf("\nEnter the two integer to divide\n");
    scanf("%d  %d", &a, &b);
    printf("the division in float value is %.2f\n", (float)a / b);

    // Q3. Implicit vs Explicit Casting:
    int aa = 10, cc = 6;
    float bb = 6;
    printf("\n\nthe implicit type casting division of %d and %f is %f\n", aa, bb, aa / bb);
    printf("the Explicit type casting division of %d and %d is %f\n", aa, cc, (aa / cc));

    // Q4. Character to ASCII Conversion:
    char ch;
    printf("\n\n\nEnter the character you want to convert into ASCII value\n");
    scanf("%s", &ch);
    printf("The ASCII value for '%c' is %d", ch, ch);

    // Q5. Float salary to Integer for Report:
    float salary;
    printf("\n\n\nenter the (float) salary that you want to convert into whole number\n");
    scanf("%f", &salary);
    printf("Your salary into whole number is %d\n", (int)salary);

    #include <stdio.h>

    //Q6. Average marks as float:
    int marks[5];
    int sum = 0;
    float average;
    printf("Enter marks for 5 subject: \n");
    for (int i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = (float)sum/5;
    printf("Average marks: %.2f\n", average);


    //Q7. Double to int coversion:
    double num;
    printf("Enter the double value \n");
    scanf("%1f", &num);
    printf("The convertion from double(%1f) to int is %d\n", num, (int)num);


//Q8. Weight conversion for pakaging:
float num1;
printf("enter the weight value:");
scanf("%f", &num1);
printf("The round offed value for weight(%f) is %d kg\n", num1, (int)num1);


//Q9. Mixed-Type billing calculation:
int rs;
float paisa;
printf("Enter the cost in rupee and than paisa\n");
scanf("%d %f", &rs, &paisa);
printf("The total money required is %.2f rupee", rs+(paisa/100));

//Q10. Compare result with and without casting:
int j = 5, l = 2;
int resultWeightCasting = j/l;
printf("result without casting (integer division): %d\n", resultWeightCasting);
float resultWithCasting = (float)j/l;
printf("result with casting (float division): %.2f\n", resultWithCasting);
    return 0;
}