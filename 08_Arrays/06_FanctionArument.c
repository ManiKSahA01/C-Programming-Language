#include<stdio.h>
// void printNumber(int arr[], int n);
// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumber(arr, 6);
//     return 0;
// }
// void printNumber(int arr[], int n){
//     for (int i = 0; i<n; i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
    
// passing array to function swap the value....
int swap(int arr[]);
int main(){
    int arr[2] = {2, 4};
    printf("%d %d\n",arr[0], arr[1]);
    
    swap(arr);
    return 0;
}
int swap(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    printf("%d %d",arr[0], arr[1]);
}
