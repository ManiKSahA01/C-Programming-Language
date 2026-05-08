#include<stdio.h>
int main(){
// 1D Array...
    int arr[5], sum=0;
    printf("Enter the 5 number:\n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<5; j++){
        sum = sum + arr[j];
        printf("Index no is: %d Array is = %d\n",j, arr[j]);
    }
    printf("Array sum is = %d\n", sum);
    printf("Array is = %d\n", arr[2]);

// Ex: 1D Array...
    // int arr1[5], arr2[5], sum =0;
    // printf("Enter the 5 number:\n");
    // for(int i=0; i<5; i++){
    //     scanf("%d",&arr1[i]);
    // }
    // for(int i=0; i<5; i++){
    //     scanf("%d",&arr2[i]);
    // }
    // for(int i=0; i<5; i++){
    //     sum = arr1[i]+arr2[i];
    //     printf("%d ",sum);
    // }

// 2D Array...
    // int arr[3][3], sum =0;
    // printf("Enter the number:\n"); 
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // printf("\n");
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         sum = sum + arr[i][j];
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Sum = %d ", sum);
    
// Multi-Dimensional Array (3D Array)
    // int arr1[3][3], arr2[3][3], sum;
    // printf("Enter the number:\n"); 
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         scanf("%d",&arr1[i][j]);
    //     }
    // }
    // printf("\n");
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         scanf("%d", &arr2[i][j]);
    //     }
    // }
    // printf("\n");
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         sum = arr1[i][j] + arr2[i][j];
    //         printf("%d ",sum);
    //     }
    //     printf("\n");
    // }

    return 0;
}

