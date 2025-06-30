//complex number
#include <stdio.h>
typedef struct
{
    float realnum;
    float imaginarynum;
} complex;

complex plus(complex a, complex b)
{
    complex c;
    c.realnum = a.realnum + b.realnum;
    c.imaginarynum = a.imaginarynum + b.imaginarynum;
    return c;
}

complex minus(complex a, complex b)
{
    complex c;
    c.realnum = a.realnum - b.realnum;
    c.imaginarynum = a.imaginarynum - b.imaginarynum;
    return c;
}

int main()
{
    complex c1, c2, c3, c4;

    printf("enter your first complex number as a + ib\n");
    scanf("%f  %f", &c1.realnum, &c1.imaginarynum);

    printf("enter your second complex number as a + ib\n");
    scanf("%f  %f", &c2.realnum, &c2.imaginarynum);

    c3 = plus(c1, c2);
    printf("the sum of your first and second complex number as a + ib is %.2f + i%.2f\n", c3.realnum, c3.imaginarynum);

    c4 = minus(c1, c2);
    printf("the substraction of your first and second complex number as a + ib is %.2f + i%.2f\n", c4.realnum, c4.imaginarynum);
}

//student details with address
#include <stdio.h>
#include <string.h>

struct Address
{
    char state[20];
    char city[20];
    int pincode;
};

struct student
{
    int id;
    char name[20];
    char grade;
    struct Address studentaddress;
};

void print_student(struct student s)
{
    printf("The id of student is %d\n", s.id);
    printf("The name of student is %s\n", s.name);
    printf("The grade of student is %c\n", s.grade);
    printf("The state of student is %s\n", s.studentaddress.state);
    printf("The city of student is %s\n", s.studentaddress.city);
    printf("The pincode of student is %d\n", s.studentaddress.pincode);
}

int main()
{
    struct student s1;

    s1.id = 0710;
    strcpy(s1.name, "Swapnil Singh");
    s1.grade = 'B';
    strcpy(s1.studentaddress.state, "Chhattisgarh");
    strcpy(s1.studentaddress.city, "Manendragarh");
    s1.studentaddress.pincode = 497447;
    print_student(s1);
    return 0;
}