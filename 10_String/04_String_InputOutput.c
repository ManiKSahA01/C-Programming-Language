#include<stdio.h>
int main(){
    char str[20];
    printf("Enter the full name: ");
    fgets(str, 20, stdin); // Entier senctence can be input..
    puts(str);

    return 0;
}
