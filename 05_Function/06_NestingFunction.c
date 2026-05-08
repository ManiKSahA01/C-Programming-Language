#include<stdio.h>
void fun1(int a, int b);
void fun2(int x, int y);
int main(){
    int p, q;

    fun1(p, q);
    return 0;
}
void fun1(int a, int b){
    printf("Enter the two number...\n");
    scanf("%d %d", &a, &b);
    
    fun2(a, b);
}
void fun2(int x, int y){
    int multi;
    multi = x*y;
    printf("Multi = %d",multi);
}
