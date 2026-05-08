#include<stdio.h>a
int main(){
// Question 01: 
    // int marks;
    // printf("Enter the marks(0 to 100): ");
    // scanf("%d", & marks);

    // if (marks > 30 && marks <= 100){
    //     printf("You are pass");
    // }
    // else if (marks > 0 && marks <= 30){
    //     printf("You are fail\n");
    //     printf("try again\n");
    // }               
    // else{
    //     printf("Wrong marks");
    // }

// Question 02:
    // int marks;
    // printf("Enter the marks: ");
    // scanf("%d", & marks);

    // if (marks < 30) {
    //     printf("Grade is C\n");
    // }
    // else if (marks >= 30 && marks < 70) {
    //     printf("Grade is B\n");
    // }
    // else if (marks >= 70 && marks < 90) {
    //     printf("Grade is A\n");
    // }
    // else {
    //     printf("Grade is A+\n");
    // }

// Question 03:
    
    char ch;
    printf("Enter the characted: ");
    scanf("%c", & ch);

    if (ch >='A' && ch<='Z'){
        printf("Upper case");
    }
    else if (ch >='a' && ch<='z'){
        printf("Lower case");
    }
    else{
        printf("Not english latter...");
    }
 

// Nigative value to positive value print...
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Absolute value....\n");
    }
    n = -n;
    printf("%d",n);

// If cost price and selling price Also profit and loss ...
    int sp, cp;
    printf("Enter the number: ");
    scanf("%d %d", &sp, &cp);

    if (cp > sp){
        printf("Profit....\n");
    }
    else if (sp > cp){
        printf("Loss...");
    }
    else{
        printf("No profit, No loss...");
    }

/*Ques : Given the length and breadth of a rectangle,
write a program to find whether the area of the
rectangle is greater than its perimeter.*/
    int l, b;
    printf("Enter length and breadth: ");
    scanf("%d %d", &l, &b);

    int a = l * b;        
    int p = 2 * (l + b);   

    if (a > p) {
        printf("Area is greater than Perimeter");
    } 
    else {
        printf("Area is not greater than Perimeter");
    }

/*Ques : Take positive integer input and tell if it
is a three digit number or not.*/
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n>99 && n>100){
        printf("it is three digit...");
    }
    else{
        printf("it is not three digit...");
    }

/*Take positive integer input and tell if it
is divisible by 5 and 3.*/
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n%5==0 && n%3==0){
        printf("it is divisible...");
    }
    else{
        printf("it is not divisible...");
    }

/*Ques : Take 3 positive integers input and print
the greatest of them.*/
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c){
        printf("Greatest a: %d",a);
    }
    else if(b>a && b>c){
        printf("Greatest b: %d",b);
    }
    else{
        printf("Greatest c: %d",c);
    } 

/*Ques : Take 4 positive integers input and print
the greatest of them.*/
    int a,b,c,d;
    printf("Enter the number: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d){
        printf("Greatest a: %d",a);
    }
    else if(b>a && b>c && b>d){
        printf("Greatest b: %d",b);
    }
    else if(c>a && c>b && c>d){
        printf("Greatest c: %d",c);
    }
    else{
        printf("Greatest d: %d",d);
    } 

/*Ques : If the ages of Ram, Shyam and Ajay are input
through the keyboard, write a program to
determine the youngest of the three.*/
    int Ram,Shyam,Ajay;
    printf("Enter the number: ");
    scanf("%d %d %d", &Ram, &Shyam, &Ajay);

    if (Ram>Shyam && Ram>Ajay){
        printf("Greatest Ram: %d",Ram);
    }
    else if(Shyam>Ram && Shyam>Ajay){
        printf("Greatest Shyam: %d",Shyam);
    }
    else{
        printf("Greatest Ajay: %d",Ajay);
    } 

/*Ques : Take 3 numbers input and tell if they
can be the sides of a triangle.*/
    int a,b,c;
    printf("Enter the 3 number: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a+b>c && a+c>b && b+c>a){
        printf("Valid triangl...");
    }
    else{
        printf("InValid triangl...");
    }


/*Ques : Take positive integer input and tell if it
is divisible by 5 or 3 but not divisible by 15..*/
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if ((n%5==0 || n%3==0) && n%15!=0){
        printf("it is divisible....");
    }
    else{
        printf("it is not divisible....");
    }
    return 0;
}