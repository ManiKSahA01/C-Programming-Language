#include<stdio.h>
void printHello(); // Function Prototype  
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printHello(n);
    }
    return 0;
}
void printHello(){   // Fanction Dedition
    printf("Hello Mani!\n");
}

// void sum(int a, int b);  // Passing Argument...
// int main(){
//     int a, b;
//     printf("Enter the 2 number: ");
//     scanf("%d %d", &a, &b);

//     sum(a, b);
//     return 0;
// }
// void sum(int a, int b){    // Arguments
//     int sum = a+b; 
//     printf("Total sum is: %d", sum);
// }

/*Ques: Power function se samajte hai*/
// int squr(int a);
// int main(){
//     int a;
//     printf("Enter the 2 number: ");
//     scanf("%d", &a);

//     squr(a);
//     return 0;
// }
// int squr(int a){
//     int root = a*a;
//     printf("%d",root);
// }

// // Question 02
// void printTable(int n);  
// int main(){    
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
    
//     printTable(n); // calling
//     return 0;
// }
// void printTable(int n){  // Arguments
//     for (int i =1; i<=10; i++){
//         printf("%d X %d =%d\n", n, i, i*n);   
//     }
//     printf("Thanks!");
// }

// Question 03:
// void calculatePrice(float value);
// int main(){
//     float value = 100.0;
//     printf("value is: %f\n", value);
//     calculatePrice(value);

//     return 0;
// }
// void calculatePrice(float value){
//     value = value +(0.18 * value);
//     printf("Final price is: %f\n", value);
// }

// Pass by value & Pass by reference
// void swap(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter the 2 number: ");
//     scanf("%d %d", &a, &b);

//     swap(a, b);
//     printf("a = %d, b = %d", a, b);

//     return 0;
// }
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("a = %d, b = %d\n", a, b);
// }




