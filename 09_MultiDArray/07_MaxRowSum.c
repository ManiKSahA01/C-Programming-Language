#include<stdio.h>
/*Ques : Write a program to print the row
number having the maximum sum in a given
matrix.*/
int main(){
    int arr[3][3];
    printf("Enter the number:\n");
    for (int i=0; i<3; i++){
        int rowSum = 0;
        for (int j=0; j<3; j++){    
            scanf("%d",&arr[i][j]);
            rowSum = rowSum + arr[i][j];
        }
        printf("Row number is: %d Row sum is: %d\n",i,rowSum);
    }
    
    return 0;
}
