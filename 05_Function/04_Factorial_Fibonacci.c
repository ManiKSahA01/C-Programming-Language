# include<stdio.h>
//Ques : Print the factorials of first ‘n’ numbers
int fact(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    fact(n);
    return 0;
}
int fact(int n){
    int fact = 1;
    for (int i =1; i<=n; i++){
        fact = fact*i;
        printf("Factorial value is: %d\n",fact);
    }
    return fact;
}

// Ques : Print first ‘n’ fibonacci numbers.
// int fib(int n);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     fib(n);
//     return 0;
// }
// int fib(int n){
//     int a =0, b =1;

//     for (int i =1; i<=n; i++){
//         printf("%d\n",a);
//         int sum = a+b;
//         a = b;
//         b = sum;
//     }
// }