#include<stdio.h>
int main(){
/*Ques : Swap 2 numbers..*/
    // int a, b, temp;
    // printf("Enter the number a = ");
    // scanf("%d", &a);
    // printf("Enter the number b = ");
    // scanf("%d",&b);

    // temp =a;
    // a =b;
    // b=temp;
    // printf("The value is a = %d\n", a);
    // printf("The value is b = %d", b);

//Ques : Swap 2 numbers without using a third variable..
    // int a, b;
    // printf("Enter the number a = ");
    // scanf("%d", &a);
    // printf("Enter the number b = ");
    // scanf("%d",&b);

    // a = a+b;
    // b = a-b;
    // a = a-b;
    // printf("Total sum is a = %d\n",a); 
    // printf("Total sum is b = %d\n",b);
    
/*Ques : Swap 3 numbers without using a third variable without
 and +,- ..*/
    int a, b;
    printf("Enter the number a = ");
    scanf("%d", &a);
    printf("Enter the number b = ");
    scanf("%d",&b);

    a = a^b;
    b = a^b;
    a = a^b;
    printf("Total sum is a = %d\n",a); 
    printf("Total sum is b = %d\n",b);

    return 0;
}
