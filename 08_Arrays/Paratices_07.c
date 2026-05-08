#include<stdio.h>
// Quyestion 01: write a program to enter price of 3 item & print 
//ther final cost with gst.
// int main(){
//     float price[3];
//     printf("Enter the number: ");

//     scanf("%f", &price[0]);
//     scanf("%f", &price[1]);
//     scanf("%f", &price[2]);

//     printf("final price 1st is: %f\n", price[0] + (0.18*price[0]));
//     printf("final price 2nd is: %f\n", price[1] + (0.18*price[1]));
//     printf("final price 3nd is: %f\n", price[2] + (0.18*price[2]));

//     return 0;
// }

// Question 02: write a function to count the number of odd numbuer 
// in an array...
// int countOdd(int arr[], int n);
// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     printf("%d",countOdd(arr, 7)); 
//     return 0;
// }
// int countOdd(int arr[], int n){
//     int count = 0;
//     for (int i = 0; i<n; i++){
//         if (arr[i] % 2 != 0){
//             count++;
//         }
//     }
//     return count;
// }

// Question 03: 
    // int main(){
    //     int arr[] = {1, 2, 3, 4, 5};
    //     printf("%d\n", *(arr+2));
    //     printf("%d\n", *(arr+5));
    
    //     return 0;
    // }
    
// Question 04: Write a function to reverse an aary.. 
// int recvrse(int arr[], int n);
// int printArr(int arr[], int n);

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     recvrse(arr, 6);
//     printArr(arr, 6);

//     return 0;
// }

// int recvrse(int arr[], int n){
//     for(int i = 0; i<n/2; i++){
//         int firstVal = arr[i];
//         int secondVol = arr [n-i-1];

//         arr[i] = secondVol;
//         arr[n-i-1] = firstVal;
//     }
// }
// int printArr(int arr[], int n){
//     for (int i =0; i<n; i++){
//         printf("%d\t", arr[i]);
//     }
// }

// Question 05: write a program to store the first n fibonacci number...
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
    
//     for (int i =2; i<n; i ++){
//         fib[i] = fib[i-1] + fib[i-2];

//         printf("%d\n", fib[i]);
//     }   
//     return 0;
// }

// Question 06: Crate a 2D array, storing the tables of 2 & 3.
void storeTables(int arr[][10], int n, int m, int number);
int main(){
    int tables[2][10];
    storeTables(tables, 0, 10, 2);
    storeTables(tables, 1, 10, 3);

    for (int i=0; i<10; i++){
        printf("%d\t", tables[0][i]);
    }
    printf("\n");
    for (int i=0; i<10; i++){
        printf("%d\t", tables[1][i]);
    }
    return 0;
}
void storeTables(int arr[][10], int n, int m, int number){
    for (int i=0; i<m; i++){
        arr[n][i] = number * (i+1);
    }
    
}

