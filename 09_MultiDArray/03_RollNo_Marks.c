#include<stdio.h>
int main(){
/*Ques : Write a program to store roll number and
marks obtained by 4 students side by side in a
matrix.*/
    int marks[4][2];
    printf("Enter the roll number and marks for 4 student:- \n");

    for (int i=0; i<4; i++){
         printf("Student %d (Enter the Roll No & Marks): ", i + 1);
        for (int j=0; j<2; j++){
            scanf("%d",&marks[i][j]);
        }
    }
    for (int i=0; i<4; i++){
        for (int j=0; j<2; j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
