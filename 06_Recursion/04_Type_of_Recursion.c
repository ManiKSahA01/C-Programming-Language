#include <stdio.h>
// Indirect Recurtion function...
void fun1(int n);
void fun2(int n);
int main(){

    fun1(8);
    return 0;
}
void fun1(int n){
    if (n <= 0){
        return;
    }
    printf("fun1: %d\n", n);
    fun2(n - 1);
}
void fun2(int n){
    if (n <= 0){
        return;
    }
    printf("fun2: %d\n", n);
    fun1(n - 1);
}

