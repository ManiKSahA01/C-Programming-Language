# include<stdio.h>
int main(){
    int age = 24;
    int *ptr = &age;
    
    // address print
    printf("The value is adderss: %p\n", &age);   
    printf("The value is memory adderss: %u\n", &age);
    
    printf("Store the value is pointer: %u\n", ptr);
    printf("address of pointer: %u\n", &ptr);


    return 0;
}
