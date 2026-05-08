#include<stdio.h>
// int main(){
/*Ques : Write a program to input week number(1-7)
and print day of week name using switch case.*/
//     int day;
//     printf("Enter day(1 to 7): ");
//     scanf("%d", &day);
    
//     switch (day){
//         case 1: printf("Today is monday\n");
//         break;
//         case 2: printf("Today is Tuesday\n");
//         break;
//         case 3: printf("Today is wednesday\n");
//         break;
//         case 4: printf("Today is thursday\n");
//         break;
//         case 5: printf("Today is friday\n");
//         break;
//         case 6: printf("Today is saturday\n");
//         break;
//         case 7: printf("Today is sunday\n");
//         break;
//         default: printf("Not a valid day");
//     }
//     printf("Thanks...");
    
//     return 0;
// }

// Example 02:
// int main(){
//     char day;
//     printf("Enter day(1 to 7): ");
//     scanf("%s", &day);
    
//     switch (day){
//         case 'm': printf("Today is monday\n");
//         break;
//         case 't': printf("Today is Tuesday\n");
//         break;
//         case 'w': printf("Today is wednesday\n");
//         break;
//         case 'T': printf("Today is thursday\n");
//         break;
//         case 'f': printf("Today is friday\n");
//         break;
//         case 's': printf("Today is saturday\n");
//         break;
//         case 'S': printf("Today is sunday\n");
//         break;
//         default: printf("Not a valid day");
//     }
//     return 0;
// }

// Example
// int main(){
//     int n;
//     printf("enter the number(1 to 3): ");
//     scanf("%d", &n);

//     switch (n){
//     case 1: printf("Rakesh\n");
//     break;
//     case 2: printf("Gurave\n");
//     break;
//     case 3: printf("Mohit\n");
//     break;
//     default: printf("non of thise\n");
//     }
//     return 0;
// }

/*Ques : Write a program to create a calculator that performs 
basic arithmetic operations (add,subtract, multiply and divide) 
using switch caseand functions. The calculator should input two 
numbers and an operator from user.*/
int main(){
    int a, b;
    char ch;
    printf("Enter the operator(+, -, *, /):\n");
    scanf(" %c", &ch);
          
    while(ch != 'x'){
        printf("Enter the new two numbers:\n");
        scanf("%d %d", &a, &b);
        switch (ch){
            case '+': printf("Add = %d\n",a+b);
            break;
            case '-': printf("sub = %d\n",a-b);
            break;
            case '*': printf("Multi = %d\n",a*b);
            break;
            case '/': printf("Div = %.2f\n",(float)a/b);
            break;
            default: printf("Enter the valid operator...\n");
        }
        printf("Enter the new operator(+, -, *, /):\n");
        scanf(" %c", &ch);
    }
    return 0;
}

