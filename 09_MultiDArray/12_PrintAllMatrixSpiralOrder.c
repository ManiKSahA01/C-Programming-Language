#include<stdio.h>
int main(){
// Ques:1 Wave print....
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for (int i=0; i<3; i++){
    //     for (int j=0; j<3; j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (int i=0; i<3; i++){
    //     if(i%2 == 0){
    //         for (int j=0; j<3; j++){
    //             printf("%d ",arr[i][j]);
    //         }
    //     }
    //     else{
    //          for (int j=3-1; j>=0; j--){
    //             printf("%d ",arr[i][j]);
    //         }
    //     }
    //     printf("\n");
    // }

// Ques:2 Wave print....
// int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for (int j=0; j<3; j++){
//         if(j%2 == 0){
//             for (int i=0; i<3; i++){
//                 printf("%d ",arr[i][j]);
//             }
//         }
//         else{
//              for (int i=3-1; i>=0; i--){
//                 printf("%d ",arr[i][j]);
//             }
//         }
//         // printf("\n");
//     }

// Methord 2
// int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for (int j=0; j<3; j++){
//         if(j%2 == 0){
//             for (int i=3-1; i>=0; i--){
//                 printf("%d ",arr[i][j]);
//             }
//         }
//         else{
//             for (int i=0; i<3; i++){
//                 printf("%d ",arr[i][j]);
//             }
//         }
//         printf("\n");
    // }
    
/*Ques : Given an n x m matrix ‘a’, print all elements
of the matrix in spiral order. (Leetcode - 54)*/
// int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int minR = 0;
//     int maxR = 3-1;
//     int minC = 0;
//     int maxC = 3-1;
//     int tot = 3*3;
//     int count = 0;

//     while (count < tot){
//         for (int i= minC; i<=maxC && count<tot; i++){
//             printf("%d ",arr[minR][i]);
//             count++;
//         }
//         minR++;
//         for (int j= minR; j<=maxR && count<tot; j++){
//             printf("%d ",arr[j][maxC]);
//             count++;
//         }
//         maxC--;
//         for (int i= maxC; i>=minC && count<tot; i--){
//             printf("%d ",arr[maxR][i]);
//             count++;
//         }
//         maxR--;
//        for (int j= maxR; j>=minR && count<tot; j--){
//             printf("%d ",arr[j][minC]);
//             count++;
//         }
//         minC++;
//     }
    
/*HW : Given a positive integer n, generate a n x n
matrix filled with elements from 1 to n2 in spiral
order. (Leetcode - 59)*/
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n][n];
    int minR = 0, maxR = n-1;
    int minC = 0, maxC = n-1;
    int num = 1;

    while (num <= n*n) {

        // top row
        for (int j = minC; j <= maxC; j++)
            a[minR][j] = num++;
        minR++;

        // right column
        for (int i = minR; i <= maxR; i++)
            a[i][maxC] = num++;
        maxC--;

        // bottom row
        for (int j = maxC; j >= minC; j--)
            a[maxR][j] = num++;
        maxR--;

        // left column
        for (int i = maxR; i >= minR; i--)
            a[i][minC] = num++;
        minC++;
    }
    // print matrix
    printf("Spiral Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}

