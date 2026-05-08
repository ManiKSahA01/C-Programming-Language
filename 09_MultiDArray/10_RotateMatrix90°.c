#include<stdio.h>
/*Ques : Write a program to rotate a matrix 90°
clockwise. (Leetcode - 48)*/
int main(){
    int arr[3][3] = {{1, 2, 9}, {9, 5, 0}, {1, 5, 0}};
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<3; i++){
        for (int j=i; j<3; j++){
            int tmep = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tmep;
        }
    }
    // printf("\n");
    // for (int i=0; i<3; i++){
    //     for (int j=0; j<3; j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    for (int i=0; i<3; i++){
        for (int j=0; j<3/2; j++){
            int tmep = arr[i][j];
            arr[i][j] = arr[i][2-j];
            arr[i][2-j] = tmep;
        }
    }
    printf("\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
