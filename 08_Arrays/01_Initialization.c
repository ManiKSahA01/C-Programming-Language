#include<stdio.h>
int main(){
    int marks[] = {89, 90, 55};
    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]); 
    printf("%d\n", marks[2]);
    
    marks[1] = 75; // {75, 90, 55};
    printf("%d\n", marks[1]);

// Example : Scanner
// int main(){
//     int marks[3];
//     printf("Enter the phy: ");
//     scanf("%d", &marks[0]);

//     printf("Enter the cham: ");
//     scanf("%d", &marks[1]);

//     printf("Enter the math: ");
//     scanf("%d", &marks[2]);

//     printf("phy = %d, cham = %d, math = %d", marks[0], marks[1], marks[2]);

// examp: 
    // int arr[5] = {3, 5, 6, 8, 9};
    // for (int i =0; i<=4; i++){
    //     printf("%d ",arr[i]);
    // }

// examp: 
    // int arr[5];
    // printf("Enter the five number: \n");
    // for (int i =0; i<=4; i++){
    //     printf("Enter the number: %d\n",i+1);
    //     scanf("%d", &arr[i]);
    // }
    // printf("Number is: %d",arr[1]); // only one value print...

// examp: 
    // int arr[5];
    // printf("Enter the five number... \n");
    // for (int i =0; i<=4; i++){
    //     // printf("Enter the number: %d\n",i+1);
    //     scanf("%d", &arr[i]);
    // }
    // for (int j =4; j>=0; j--){ // print the all value
    //     printf("%d ",arr[j]);
    // }
    return 0;
}
