#include<stdio.h>
// Pass by value & Pass by reference
void swap(int a, int b);
int main(){
    int a, b;
    printf("Enter the 2 number: ");
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n", a, b);
    swap(a, b);

    return 0;
}
void swap(int a, int b){
    // int temp = a;
    // a = b;
    // b = temp;
    
    // a = a+b;
    // b = a-b;
    // a = a-b;

    a = a^b;
    b = a^b;
    a = a^b;
    
    printf("a = %d, b = %d\n", a, b);
}