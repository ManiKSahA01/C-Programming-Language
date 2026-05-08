#include<stdio.h>
int main(){
    // 2 x 3
    // int marks[2][3];

    // marks[0][0] = 99;
    // marks[0][1] = 78;
    // marks[0][2] = 97;

    // marks[1][0] = 89;
    // marks[1][1] = 77;
    // marks[1][2] = 92;

    // printf("%d\n", marks[0][2]);

// methord: 2
    // int arr[3][3] = {{2, 3, 7},{7, 8, 4},{5, 7, 0}};
    // for (int i =0; i<3; i++){
    // for (int j=0; j<3; j++){
    //     printf("%d ", arr[i][j]);
    // }
    // printf("\n");
    // }
    // printf("%d ", arr[0][1]);
    
// methord: 3
    int arr[2][3] = {1, 2, 3, 5, 6, 7};
    for (int i =0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("%d ", arr[0][1]);

    return 0;
}

