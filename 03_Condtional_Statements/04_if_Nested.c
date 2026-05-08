#include<stdio.h>
int main(){
    int age;
    printf("Enter the number: ");
    scanf("%d", &age);

    if(age >= 0){
        printf("Positive Number...\n");
        if(age >= 18){
            printf("Adult...\n");
        }else{
            printf("Not Adult...\n");
        }
    }else{
        printf("Negative number...\n");
    }

//Ques: Even number and Odd number Nested if statements using...
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     if(n >= 0){
//         printf("Positive\n");
//         if(n % 2 == 0){
//             printf("Even...\n");
//         }else{
//             printf("Odd...\n");
//         }
//     }else{
//         printf("Negative\n");
//     }

/*Ques : Take positive integer input and tell if it
is divisible by 5 or 3.*/
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // if (n%5==0){
    //     if (n%3==0){
    //         printf("it is divisible....");
    //     }
    //     else{
    //         printf("it is not divisible....");
    //     }
    // }

/*Ques : Take positive integer input and tell if it
is divisible by 5 or 3 but not divisible by 15.*/
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // if (n%5 == 0 || n%3 == 0){
    //     if (n%15!=0){
    //         printf("it is divisible....");
    //     }
    //     else{
    //         printf("it is divisible but not 15....");
    //     }
    // }
    // else{
    //     printf("it is not divisible....");
    // }

/*Ques : Take 3 positive integers input and print
the greatest of them...*/
    // int a, b, c;
    // printf("Enter the number: ");
    // scanf("%d %d %d", &a, &b, &c);

    // if (a>b){
    //     if(a>c){
    //         printf("greater than a %d",a);
    //     }
    //     else{
    //         printf("greater than b %d",c);
    //     }
    // }
    // else{
    //     if(b>c){
    //         printf("greater than b %d",b);
    //     }
    //     else{
    //         printf("greater than c %d",c);
    //     }
    // }

/*Ques : Take 3 positive integers input and print
the greatest of them...*/
//     int Ram, Shyam, Ajay;
//     printf("Enter the number: ");
//     scanf("%d %d %d", &Ram, &Shyam, &Ajay);

//     if (Ram>Shyam){
//         if(Ram>Ajay){
//             printf("greater than Ram %d",Ram);
//         }
//         else{
//             printf("greater than Ajay %d",Ajay);
//         }
//     }
//     else{
//         if(Shyam>Ajay){
//             printf("greater than Shyam %d",Shyam);
//         }
//         else{
//             printf("greater than Ajay %d",Ajay);
//         }
//     }

    return 0;
}

