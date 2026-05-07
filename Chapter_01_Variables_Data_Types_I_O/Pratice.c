#include<stdio.h>
#include<math.h>
int main(){
// Question 01: Practice Qs 1 (Area of Square)
    // int side;
    // printf("Enter side");
    // scanf("%d", &side);

    // printf("area is: %d", side * side);

// Question 02: (Area of Circle)
    // float radius;
    // printf("Enter radius: ");
    // scanf("%f", &radius);

    // printf("area is: %f", 3.14 * radius * radius);


/* Ques 03: Write a program to calculate perimeter of rectangle.
take sides, a & b, from the user.*/
//     int a, b, per;
//     printf("Enter the number: ");
//     scanf("%d %d", &a, &b);

//     per = 2 *(a+b);
//     printf("%d", per);
    
/* Write a program input temperature in fahrenheit and 
convert into centigrade...*/
    // int f, c;

    // printf("Enter the tahrenheit: ");
    // scanf("%d", &f);

    // c = (f - 32)*5/9;
    // printf("Temperature in convert = %d", c);

// Write a program find the value of sin, cos, and tan...
    int n;
    float s, c, t, r;
    printf("Enter the degree: ");
    scanf("%d", &n);

    r = (3.14/180)*n;
    s = sin(r);
    c = cos(r);
    t = tan(r);

    printf("Sin = %f\nCos = %f\nTan = %f", s, c, t);
    
    return 0;
}


