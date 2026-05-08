#include<stdio.h>
int main(){
// Input methord: 3
    // printf("Enter the 9 number: \n");
    // int arr[3][3];
    // for (int i =0; i<3; i++){
    //     for (int j=0; j<3; j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // for (int i =0; i<3; i++){
    //     for (int j=0; j<3; j++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("%d ", arr[0][2]);

// Input methord: 4
    int r, c;
    printf("Enter the row and colume number: \n");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter the array...\n");
    for (int i =0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i =0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Array is: %d", arr[0][2]);

    return 0;
}
