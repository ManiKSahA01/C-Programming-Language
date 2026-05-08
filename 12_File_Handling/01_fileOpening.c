#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt","r"); // file opening(create)
    fclose(fptr);

    return 0;
}
