#include<stdio.h>
/*Ques : Write a program to add two matrices.*/
int main(){
    int arrA[2][2] = {{3, 2}, {5, 4}};
    int arrB[2][2] = {{1, 8}, {1, 4}};
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("%d ",arrA[i][j]+arrB[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
