#include<stdio.h>
/*Ques : Write a program to Print the transpose of
the matrix entered by the user. (Leetcode - 867) */
int main(){
    // int arr[3][4] = {{1, 5, 9, 1}, {9, 5, 0, 1}, {1, 5, 0, 9}};
    // // // int arr[3][3] = {{1, 5, 9}, {9, 5, 0}, {1, 5, 0}};
    // for (int i =0; i<3; i++){
    //     for (int j =0; j<4; j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (int i =0; i<4; i++){
    //     for (int j =0; j<3; j++){
    //         printf("%d ",arr[j][i]);
    //     }
    //     printf("\n");
    // }

//Ques: to change given the n*n matrixto its transpose.
    // printf("\n");
    // for (int i =0; i<3; i++){
    //     for (int j =0; j<3; j++){
        //         printf("%d ",arr[j][i]);
        //     }
        //     printf("\n");
        // }
        
//Ques: to change given the n*n matrixto its transpose.(swap value)
    int n;
    printf("Enter the number of row/Columns: ");
    scanf("%d",&n);
    
    int arr[n][n];
    printf("Enter the all elements: \n");
    for (int i =0; i<n; i++){
        for (int j =0; j<n; j++){
            scanf("%d",&arr[i][j]); // Input
        }
    }
    for (int i =0; i<n; i++){
        for (int j =i; j<n; j++){
            int temp = arr[i][j];  //transpose
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\n");
    for (int i =0; i<n; i++){
        for (int j =0; j<n; j++){
            printf("%d ",arr[i][j]); // output
        }
        printf("\n");
    }
    return 0;
}
