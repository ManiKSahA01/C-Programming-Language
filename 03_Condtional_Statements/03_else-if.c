#include<stdio.h>
int main(){
//Conditional Statements else-if
    // int age;
    // printf("Enter the age: ");
    // scanf("%d", & age);

    // if (age>=18){
    //     printf("Adult\n");
    // }
    // else if (age>12 && age<18){
    //     printf("Teenage");
    // }
    // else{
    //     printf("Child\n");
    // }
    // printf("Thank you!");
    
/*Ques : Take input percentage of a student and
print the Grade according to marks:...*/
    // int n;
    // printf("Enter the Number: ");
    // scanf("%d", &n);

    // if (n>=91 && n<=100){
    //     printf("Excellent...");
    // }
    // else if (n>=81 && n<=90){
    //     printf("Very Good...");
    // }
    // else if (n>=71 && n<=80) {
    //     printf("Good...");
    // }
    // else if (n>=61 && n<=70) {
    //     printf("Can do better...");
    // }
    // else if (n>= 51 && n<=60) {
    //     printf("Average...");
    // }
    // else if (n>=41 && n<=50) {
    //     printf("Below Average...");
    // }
    // else if (n>=0 && n<=40) {
    //     printf("Fail...");
    // }
    // else {
    //     printf("Invalid number...");
    // }

/*Ques : Given a point (x, y), write a program to find
out if it lies on the x-axis, y-axis or at the origin, viz.
(0, 0)...*/
//     int x, y;
//     printf("Enter the 2 number: ");
//     scanf("%d %d", &x, &y);
//     if (x==0 && y==0){
//         printf("The point is origin ");
//     }
//     else if(x==0){
//         printf("The on x-axis");
//     }
//     else if(y==0){
//         printf("The on y-axis");
//     }
//     else{
//         printf("The point does not lin on x or y axis...");
//     }

// Ques: 
    // int a, b;
    // char ch;  
    // printf("Enter the two numbers:\n");
    // scanf("%d %d", &a, &b);

    // printf("Enter the operator (+, -, *, /):\n");
    // scanf(" %c", &ch);  

    // while (ch!='x'){
    //     if(ch == '+'){
    //         printf("Abb = %d\n", a+b);
    //     }
    //     else if(ch == '-'){
    //         printf("Sub = %d\n", a-b);
    //     }
    //     else if(ch == '*'){
    //         printf("Multi = %d\n", a*b);
    //     }
    //     else if(ch == '/'){
    //         printf("Div = %f\n", (float)a/b);
    //     }
    //     else{
    //         printf("Invalid Operator\n");
    //     }
    //     printf("Enter the new two numbers:\n");
    //     scanf("%d %d", &a, &b);

    //     printf("Enter the new operator (+, -, *, /):\n");
    //     scanf(" %c", &ch);
    // }
    // printf("Program is ending...");

/*Ques: write a program to access side of triangle and print the type 
of triangle...*/
    // int a, b, c;
    // printf("Enter the three number...\n");
    // scanf("%d %d %d",&a, &b, &c);
    // if (a==b && b==c && c==b){
    //     printf("Triangle is equilateral...");
    // }
    // else if (a==b && b!=c){
    //     printf("Triangle is isosceles...");
    // }
    // else{
    //     printf("Triangle is scatene...");
    // }
    
/*Ques: Write a program to input three angles of triangle and check it
form a triangle ro not...*/
    // int a, b, c, s;
    // printf("Enter the three number...\n");
    // scanf("%d %d %d",&a, &b, &c);
    // s = a+b+c;

    // if (s == 180){
    //     printf("It is a triangle...");
    // }
    // else{
    //     printf("It is not a triangle...");
    // }

//Ques: Write a program to find the roots of a quadration equation...
    int a, b, c, d;
    printf("Enter the three number...\n");
    scanf("%d %d %d",&a, &b, &c);
    d = b*b - 4*a*c;

    if (d > 0){
        printf("Two roots...");
    }
    else if(d==0){
        printf("one roots...");
    }
    else{
        printf("No roots...");
    }
    return 0;
}
