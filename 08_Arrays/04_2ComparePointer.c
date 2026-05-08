#include<stdio.h>
int main(){
    int age = 24;
    int *ptr = &age;

    int _age = 25;
    int *_ptr = &_age;

    printf("%u %u \n differance = %u\n", ptr, _ptr, ptr - _ptr);

    _ptr = &age;
    printf("Comparison = %u\n", ptr == _ptr);

    return 0;
}
