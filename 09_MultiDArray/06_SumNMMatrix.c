#include<stdio.h>
// Ques : Find the sum of a given matrix of n x m. 
int main(){
    int n, m;
    printf("Enter the number row & colume: ");
    scanf("%d %d",&n, &m);

    int arr[n][m];
    int sum =0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    // printf("\n");
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         printf("%d ",arr[i][j]); // value print
    //     }
    //     printf("\n");
    // }
    printf("Sum is: %d ",sum);
    return 0;
}
