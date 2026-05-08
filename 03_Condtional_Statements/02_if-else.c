#include<stdio.h>
int main(){
//Conditional Statements if-else
//     int age;
//     printf("Enter the age: ");
//     scanf("%d", &age);
    
//     if (age >= 18){
//         printf("Yes adult \n");
//     }
//     else{
//         printf("No adult \n");
//     }
//     printf("Thank you!");
//     return 0;
// }

// Example
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("Yes adult \n");
    }
    if (age >= 15){
        printf("same adult \n");
    }
    else{
        printf("No adult \n");
    }
    printf("Thank you...");

    return 0;
}