#include<stdio.h>
int main(){
//example:-
// i++ -> post incrment
// i-- (post decrement) 
// int i =1;
// printf("%d\n", i--);
// printf("%d\n", i);

// Example:-
// ++i -> pre incrment
// --i (pre decrement)
// int i =1;
// printf("%d\n", ++i);
// printf("%d\n", i);

// example 02:
    // for (int i =1; i <=5; i++){
    //     printf("Hello world\n");    
    // }

//Exp...
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (int i =1; i<=n; i=i+2){
    //     printf("Hello Coding...\n", i);
    // }

//example
// for (float i =1.0; i<=5.0; i++){
//     printf("%f\n", i);
// }

// increment
    // for (int i=1; i <=100; i++){
    //     printf("%d\n", i);
    
    // }

// decrement
    // for (int i=100; i>=1; i--){
    //     printf("%d\n", i);
    
    // }

// float 
    // for (float i=1.0; i<=5.0; i++){
    //     printf("%f\n", i);
    
    // }

// Charater
    // for (char ch='a'; ch<='z'; ch++){
    //     printf("%c\n", ch);
    
    // }

// Infite loop
    // for (int i=1; ; i++){
    //     printf("%d\n", i);
    
    // }

// Positive input scan
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", & n);

    // for (int i = 1; i<=n; i++){
    //     printf("%d\n", i);
    
    // }

// Nigtive
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (int i = n; i>=1; i--){
    //     printf("%d\n", i);
    
    // }

// Evan number
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for(int i =1; i<=n; i++){
    //     if (i%2==0){
    //         printf("Even No: %d\n", i);
    //     }
    // }

// odd number
    // int i;
    // printf("Odd number:\n");
    // for (i = 1; i <= 10; i++) {
    //     if (i % 2 != 0) {
    //     }
    //     printf("%d\n", i);
    // }

// Table
    // for (int i=19; i<=190; i=i+19){
    //     printf("%d\n",i);
    // }

// Factorial...
    // int n, fact = 1;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++) {
    //     fact = fact * i;
    //     printf("%d",i);
    //     if(i<n){
    //         printf(" X ");
    //     }
    // }
    // printf("\nFactorial sum = %d ",fact);
    
// fibonacci...
    int n, a=1, b=1, fib, sum =0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i =0; i<n; i++){
        printf("%d ", a);
        sum = sum + a;
        fib = a+b;
        a = b;
        b = fib;
    }
    printf("\nSum of fibonacchi = %d",sum);

/*Ques : Display this AP - 1,3,5,7,9.. upto ‘n’ 
terms.*/
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (int i=1; i<2*n+1; i=i+2){
    //     printf("%d\n", i);
    // }

/*Ques : Display this AP - 4,7,10,13,16.. upto ‘n’
terms.*/
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (int i=4; i<=3*n+1; i=i+3){
    //     printf("%d\n", i);
    // }

// Examp 2
    // int n, a=4;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (int i=1; i<=n; i++){
    //     printf("%d\n", a);
    //     a= a+3;
    // }

/*Ques : Display this GP - 1,2,4,8,16,32,.. upto ‘n’
terms.*/
    // int n, a=1;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (int i=1; i<=n; i++){
    //     printf("%d\n", a);
    //     a = a*2;
    // }

/*HW: Display this GP - 3,12,48,.. upto ‘n’ terms.*/
    // int n, a=3;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (int i=1; i<=n; i++){
    //     printf("%d\n", a);
    //     a = a*4;
    // }

/*Ques: Display this AP - 100,97,94,..upto all
terms which are positive.*/
    // int n, a=100;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (int i=1; i<=n; i++){
    //     printf("%d ", a);
    //     a = a-3;
    // }

/*HW : Display this GP - 100,50,25,.. upto ‘n’
terms.*/
    // float n, a=1000;
    // printf("Enter the number: ");
    // scanf("%f", &n);

    // for (int i=1; i<=n; i++){
    //     printf("%f\n", a);
    //     a = a/2;
    // }


    return 0;
}
