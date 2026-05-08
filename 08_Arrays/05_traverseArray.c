#include<stdio.h>
int main(){
    int aadhar[5];
    // input
    for (int i = 0; i<5; i++){
        printf("%d index: ", i);
        scanf("%d", &aadhar[i]);
    }
    //output
    for (int i = 0; i<5; i++){
        // printf("%d index: %d\n", i, aadhar[i]);
    }

// Array is a pointer EX:-
    // int arr[3] = {10, 20, 30};
    // int *p = arr;

    // printf("%d\n", *p);      // 10
    // printf("%d\n", *(p+1)); // 20
    // printf("%d", *(p+2));

    return 0;
} 
