#include<stdio.h>
/*Ques : Write a program to store roll number and
marks obtained by 4 students side by side in a
matrix.*/
int main(){
    printf("Enter the number:-\n");

    int store[5][5];
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            scanf("%d",&store[i][j]);
        }
    }
    printf("Store the value is 10 to 5 By 5:-\n");
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            printf("%d ",store[i][j]);
        }
        printf("\n");
    }

    return 0;
}
