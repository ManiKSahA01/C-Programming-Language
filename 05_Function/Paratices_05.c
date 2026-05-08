#include<stdio.h>
// Question 01: 
// void printHello();
// void printgoodBye();

// int main(){
//     printHello();
//     printgoodBye();
//     return 0;
// }
// void printHello(){
//     printf("Hello\n");
// }
// void printgoodBye(){
//     printf("Good Bye\n");
// }


// Question 02:
// void Namaste();
// void Bonjour();
// int main(){
//     printf("Enter f for french & i for indian: ");
//     char ch;
//     scanf("%c", &ch);

//     if (ch == 'i'){
//         Namaste();
//     }
//     else{
//         Bonjour();
//     }
//     return 0;
// }
// void Namaste(){
//     printf("Namaste\n");
// }
// void Bonjour(){
//     printf("Bonjour\n");
// }


// Question 03: 
// # include<math.h>
// int main(){
//     float n; 
//     printf("Enter the number: ");
//     scanf("%f", &n);

//     printf("Square is: %f\n", pow(n, 2));
//     return 0;
// }

// Question 04: 
// float squareArea(float side);
// float circleArea(float rad);
// float rectangleArea(float a, float b);

// int main(){
//     float a = 5.0;
//     float b = 10;
//     float r = 7.0;

//     printf("squareArea is: %f\n", squareArea(a));
//     printf("circleArea is: %f\n", circleArea(r));
//     printf("rectangleArea is: %f\n", rectangleArea(a, b));
//     return 0;
// }
// float squareArea(float side){
//     return side * side;
// }
// float circleArea(float rad){
//     return 3.14 * rad * rad;
// }
// float rectangleArea(float a, float b){
//     return a * b;
// }

// Question 05: sum of first n natural number.
// int sum (int n);
// int main(){
//     printf("Sum is: %d", sum(5));
//     return 0;
// }
// int sum(int n){
//     if (n == 1){
//         return 1; 
//     }
//     int sumNo1 = sum(n-1);  // sum of 1 to n
//     int sumN = sumNo1 + n;
//     return sumN;
// }

// Question 06: Write a funtion to convert celsius to fahrenheit.
// float convertTemp(float celsius);
// float main(){    
//     float far = convertTemp(37);
//     printf("far is: %f", far);
//     return 0;
// }
// float convertTemp(float celsius){
//     float far = celsius * (9.0/5.0)+32;
//     return far;
// }


// Question 07: write a function to calculate parcentage of a student from marks
//science, Math & Sanskrit...
// int calcParcentage(int Science, int Math, int Sanskrit);
// int main(){
//     int sc = 86;
//     int math = 89;
//     int san = 93;

//     printf("Parcentage is: %d\n", calcParcentage(sc, math, san));
//     return 0;
// }
// int calcParcentage(int Science, int Math, int Sanskrit){
//     return (Science + Math + Sanskrit) / 3;

// }

// Question 09: Return type
// int odev(int x);
// int main(){
//     int x, t;
//     printf("Enter the number: ");
//     scanf("%d", &x);

//     t = odev(x);
//     if (t % 2 == 0){
//         printf("Even number...");   
//     }
//     else{
//         printf("Odd Number...");
//     }
//     return 0;
// }
// int odev(int x){
//     return x;
// }

//QUestion 09: Non Return type
void odev(int x);
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    odev(x);
    return 0;
}
void odev(int x){
    if (x % 2 == 0){
        printf("Even number...");   
    }
    else{
        printf("Odd Number...");
    }
}