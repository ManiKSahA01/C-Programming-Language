#include<stdio.h>
// int main(){
// // Example: print thr sum of reverse value
//     int n, sum =0;
//     printf("Enter the number: ");
//     scanf("%d", & n);

//     for (int j=n; j>=1; j--){
//         sum = sum + j;
//         printf("%d\n", n);
//     }
//     printf("Sum is: %d\n", sum);

//     return 0;
// }

//Question 01: print the number 0 to 10...
// for (int i =0; i<10; i++){
//     printf("%d\n", i);
// }

// Question 02: sum
// Also, print them reverse...
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int sum =0;
//     for (int i =1, j=n; i<=n && j>=1; i++, j--){
//         sum = sum + i;
//         // printf("%d\n", i);
//         printf("%d\n", j);
//     }
//     printf("Sum is %d", sum);
//     return 0;
// }

// Question 04: print the table of a number input the user. n = 2

    // int n;
    // printf("Enter the number: ");
    // scanf("%d", & n);

    // for (int i = 1; i <= 10; i++){
    //     printf("%d x %d = %d\n",n, i, n*i);
    // }
    
// Question 04: keep taking the number as input from user until 
//user enter an odd number.
// int main(){
//     int n;
//     do{
//         printf("Enter the number: ");
//         scanf("%d", &n);
//         printf("%d\n", n);

//         if(n % 2 != 0){ // odd number
//             break;
//         }
//     } while (1);
//     printf("This is odd number");

//     return 0;
// }

// Question 05: multiple of 7
// int main(){
//     int n;
//     do{
//         printf("Enter the number: ");
//         scanf("%d", &n);
//         printf("%d\n", n);

//         if(n % 7 == 0){ //multiple number
//             break;
//         }
//         }while(1); // 1 is a multiple times true...
//         printf("This is 7 multiple number");

//     return 0;
// }

    
// Quention 06: Print all number from 1 to 10 except for 6..

    // int n;
    // printf("Enter the number: ");
    // scanf("%d", & n);

    // for (int i = 1; i <= n; i++){
    //     if (i == 6){
    //         continue;        
    //     }      
    //     printf("%d\n", i);    
    // }
    

// Question 07.: Print all the odd numbers from 5 to 50.  
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", & n);

//     for (int i = 5; i <= n; i++){
//         if (i % 2 != 0){
//             printf("%d\n", i);        
//         }   
//     }
//     return 0;
// }
// Question 08: Print the factorial of a number n.
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", & n);

    // int fact = 1;
    // for (int i = 1; i <= n; i++){
    //     fact = fact * i;
    //     printf("%d\n", i);
    // }
    // printf("Factorial is %d\n", fact);

// Question 09: Print reverse of the table for a number n.
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", & n);

//     for (int i = 10; i >= 1; i--){
//         printf("%d X %d = %d\n",n, i, n * i);
//     }
//     return 0;
// }
// Question 10: Calculate the sum of all numbers between 5 and 50. (including 5 & 50)
// int main(){
//     int n, sum = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for (int i = 5; i<= n; i++){
//         sum = sum + i;
//     }
//     printf("%d\n", sum);
//     return 0;
// }
    

// Question 11: print the * 5 colume and 5 Row.
// int i, j;
// for (int i =1; i<=5; i++){
//     for (int j =1; j<=i; j++){
//         printf(" %c", '*');
//     }
//     printf("\n");
// }


// same question convart *
// int i, j;
// for (int i=1; i<=5; i++){
//     for (int j=1; j<=i; j++){
//         printf("* ");
//     }
//     printf("\n");
// }

// Question  
// int i, j;
// for (int i =5; i>=1; i--){
//     for (int j= 1; j<=i; j++){
//         printf("* ");
//     }
//     printf("\n"); 
// }

// Quyestion 11: 1 to 5 print
int main(){
    for (int i =1; i<=5; i++){
        for (int j =1; j<=i; j++){
            printf(" %d", j);
        }
        printf("\n");
    }
    
    return 0;
}

