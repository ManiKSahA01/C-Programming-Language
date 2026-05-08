#include<stdio.h>
int main(){
/* Ques: Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.] */
    // int marks[10] = {78, 98, 52, 32, 31, 47, 25, 69, 29, 30};
    // int marks[10];
    // for (int i =0; i<10; i++){
    //     printf("Enter the number %d: ", i);
    //     scanf("%d",&marks[i]); // input the users...
    // }
    // for (int i =0; i<10; i++){
    //     if (marks[i]<=35){
    //         // printf("%d ",marks[i]); // value print...
    //         printf("%d ",i); // index number print...
    //     }
    // }

/*Ques : Calculate the sum of all the elements in the
given array. */
    // int n;
    // printf("Enter the number: ");
    // scanf("%d",&n);

    // int calulate[n];
    // int sum =0;
    // for (int i=0; i<n; i++){
    //     printf("Enter the number %d: ",i);
    //     scanf("%d",&calulate[i]);
    //     sum = sum + calulate[i];
    // }
    // printf("Total is: %d",sum);
    
/*Homework : Calculate the product of all the elements
in the given array. */
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int calculate[n];
    int product = 1;
    for (int i=0; i<n; i++){
        printf("Enter the product %d: ",i);
        scanf("%d",&calculate[i]);

        product = product * calculate[i];
    }
    printf("Toal is: %d",product);

/*Ques : Find the maximum value out of all the elements
in the array.*/
    // int n;
    // printf("Enter the number: ");
    // scanf("%d",&n);

    // int arr[n];
    // int max = -1;
    // for (int i=0; i<n; i++){
    //     printf("Enter the number max %d: ",i);
    //     scanf("%d",&arr[i]);

    //     if(max < arr[i]){
    //         max = arr[i];
    //     }
    // }
    // printf("Maximum number is: %d",max);
    
/*Ques : Find the minimum value out of all the elements
in the array.*/
    // int n;
    // printf("Enter the number: ");
    // scanf("%d",&n);

    // int arr[n];
    // int min = arr[0];
    // for (int i =0; i<n; i++){
    //     printf("Enter the minimum value %d: ",i);
    //     scanf("%d",&arr[i]);

    //     if(min > arr[i]){
    //         min = arr[i];
    //     }
    // }
    // printf("the minimum value is: %d",min);
    

/*Ques : Given an array of integers, change the value of
all odd indexed elements to its second multiple and
increment all even indexed value by 10.*/
    // int n;
    // printf("Enter the number: ");
    // scanf("%d",&n);

    // int arr[n];
    // for (int i =0; i<n; i++){
    //     printf("Enter the index number %d: ",i);
    //     scanf("%d",&arr[i]);
        
    //     if(i%2 != 0){
    //         arr[i] = arr[i] * 2;
    //     }
    //     else{
    //         arr[i] = arr[i] + 10;
    //     }        
    // }
    // for (int i =0; i<n; i++){
    //     printf("%d ", arr[i]);
    // }

/*Ques : Count the number of elements in given array
greater than a given number x. */
    // int n, x;
    // printf("Enter the 2 number: ");
    // scanf("%d %d",&n, &x);
    
    // int arr[n];
    // int count = 0;
    // for (int i =0; i<n; i++){
    //     // printf("Enter the index number %d: ",i);
    //     scanf("%d",&arr[i]);
        
    //     if(arr[i] > x){
    //         printf("Greater number is: %d\n",arr[i]);
    //         count++;
    //     }
    // }
    // printf("Count is: %d",count);

/*Ques : Find the difference between the sum of
elements at even indices to the sum of elements at
odd indices.*/
    // int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // int evenSum = 0; 
    // int oddSum = 0; 
    // for (int i =0; i<7; i++){
    //     if(i%2 == 0){
    //         evenSum = evenSum + arr[i];
    //     }
    //     else{
    //         oddSum = oddSum+arr[i];
    //     }
    // }
    // int diff = evenSum - oddSum;
    // printf("Difference number is: %d",diff);

/*"Ques : Find the total number of pairs in the Array
whose sum is equal to the given value x. */
    // int x;
    // printf("Enter the pairs number: ");
    // scanf("%d",&x);

    // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int totalPairs=0;
    // for (int i =0; i<8; i++){
    //     for (int j=i+1; j<8; j++){
    //         if(arr[i]+arr[j] == x){
    //             totalPairs++;
    //             printf("(%d %d)\n",arr[i], arr[j]);
    //         }
    //     }
    // }
    // printf("Sum is: %d",totalPairs);

/*Ques : Count the number of triplets whose sum is
equal to the given value x. */
    // int x;
    // printf("Enter the number: ");
    // scanf("%d",&x);

    // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int count =0;
    // for (int i =0; i<8; i++){
    //     for (int j =i+1; j<8; j++){
    //         for (int k =j+1; k<8; k++){
    //             if (arr[i]+arr[j]+arr[k] == x){
    //             count++;
    //             printf("(%d %d %d)\n",arr[i],arr[j],arr[k]);
    //             }
    //         }
    //     } 
    // }
    // printf("Total triples is: %d",count);
    
/*Ques : Find the second largest element in the given
Array. */
// #include<limits.h>
//     int arr[8] = {1, 2, 3, 4, 5, 10, 11, 9};
//     int max = INT_MIN;
//     int smax = INT_MIN;
    
//     for (int i =0; i<8; i++){
//         printf("Array number is: %d\n",arr[i]);
//         if (arr[i] > max){
//             smax = max;
//             max = arr[i];
//         }
//         else if(arr[i] != max && arr[i] > smax){
//             smax = arr[i];
//         }
//     }
//     printf("Second element is: %d ",smax);

/*Ques : Write a program to copy the contents of one
array into another in the reverse order.*/
    // int arr[8] = {1, 2, 3, 4, 11, 6, 7, 8};
    // for (int i=0; i<8; i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    // for (int j=7; j>=0; j--){
    //     printf("%d ",arr[j]);
    // }
    
/*Homework : If an array arr contains n elements, then
check if the given array is a palindrome or not.*/
    // int arr[5] = {1, 2, 3, 2, 1};
    // int palidrome =1;
    // for (int i=0; i<5/2; i++){
    //     if(arr[i] != arr[5-1-i]){
    //         palidrome = 0;
    //         break;
    //     }
    // }
    // if(palidrome == 1){
    //     printf("Array is palidrome...");
    // }
    // else{
    //     printf("Array is not palidrome...");

    // }
    
/*Linear search Give array & a number 'x' find out if 'x' like in
the array or not, if yes then print the index...*/
// #include<stdbool.h>
//     int arr[8] = {1, 2, 3, 4, 5, 6, 4, 8};
//     int x = 4;
//     bool flag = false;//  means the element is not present
//     for (int i=0; i<8; i++){
//         if(arr[i] == x){
//             printf("%d is present in the array and its index is %d\n",x,i);
//             flag = true;  // means element is present
//             break;
//         }
//     }
//     if (flag == false){
//         printf("%d is not present in the array...\n",x);    
//     }
//     else{
//         printf("%d is present in the array...",x);    
//     }

/*Ques : Given an array containing elements from 1 to
100 except one element in this range is missing. Find
the missing element.*/
    // int arr[99] = {1,2,3,4,5,6,7,8,9,10,
    // 11,12,13,14,15,16,17,18,19,20,
    // 21,22,23,24,25,26,27,28,29,30,
    // 31,32,33,34,35,36,37,38,39,40,
    // 41,42,43,44,45,46,47,48,49,50,
    // 51,52,53,54,55,56,58,59,60,
    // 61,62,63,64,65,66,67,68,69,70,
    // 71,72,73,74,75,76,77,78,79,80,
    // 81,82,83,84,85,86,87,88,89,90,
    // 91,92,93,94,95,96,97,98,99,100};
    // int arraySum=0;

    // for (int i=0; i<99; i++){
    //     arraySum=arraySum+arr[i];        
    // }
    // int totalSum = (100*101)/2;
    //     printf("Missing number is: %d\n",totalSum-arraySum);
    
/*Ques: WAP to find a duplicate element from a given
array of integers.*/
    // int arr[8] = {1, 2, 3, 4, 3, 5, 6, 7};
    // for (int i=0; i<8; i++){
    //     for (int j=i+1; j<8; j++){
    //         if(arr[i] == arr[j]){
    //             printf("%d is a duplicate number...\n",arr[i]);
    //             break;
    //         }
    //     }
    // }

/*Ques : Find the unique number in a given Array where
all the elements are being repeated twice with one
value being unique.*/
// #include<stdbool.h>
//     int arr[7] = {1, 2, 3, 4, 5, 2, 3};
//     for (int i=0; i<7; i++){
//         bool flag = false;

//         for (int j=i+1; j<7; j++){
//             if (arr[i] == arr[j]){
//                 flag = true;
//             }
//         }
//         if (flag == false){
//             printf("%d is a unique element...\n", arr[i]);
//             break;
//         }   
//     }
    return 0;
}

