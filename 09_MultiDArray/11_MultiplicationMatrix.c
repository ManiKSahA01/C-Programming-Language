#include<stdio.h>
/*Ques : Write a program to print the multiplication
of two matrices given by the user.*/
int main(){
    int arrA[3][2] = {{1, 2}, {9, 5}, {1, 5}};
    int arrB[2][4] = {{1, 2, 9, 5}, {9, 5, 2, 5}};
    int arrRes[3][4];
    int cr = 2;
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){

            arrRes[i][j] = 0;
            for(int k =0; k<cr; k++){
                arrRes[i][j] = arrRes[i][j] + arrA[i][k] * arrB[k][j];
            }
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            printf("%d ",arrRes[i][j]);
        }
        printf("\n");
    }

    return 0;
}
