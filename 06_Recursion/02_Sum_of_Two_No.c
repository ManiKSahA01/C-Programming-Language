#include<stdio.h>
// Direct Method...
int sum(int a, int b);
int main(){
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d",sum(a, b));

    return 0;
}
int sum(int a, int b){
    if(a == 0){
        return b;
    }
    else{
        sum(a-1, b+1);
    }
}

// Example 2: Sum of netural number...
// int sum(int n);
// int main(){
//     int n, result;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     result = sum(n);
//     printf("Sum of netural number = %d", result);
//     return 0;
// }
// int sum(int n){
//     int s =0;
//     if(n==0){
//         return n;
//     }
//     s = n+sum(n-1);
// }

// Indirect Method...