#include<stdio.h>
int main(){
    int a=3, b=5, sum;
    sum = a+b;
    printf("%d\n",sum);

    goto add;
    add: sum = sum + 5;
    printf("%d",sum);

    return 0;
}
