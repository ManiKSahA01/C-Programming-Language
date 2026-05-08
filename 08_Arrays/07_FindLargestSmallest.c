#include<stdio.h>
int main(){
    int arr[5], big, small;

    for(int i =0; i<5; i++){
        printf("Enter the Element: ");
        scanf("%d", &arr[i]);
    }
    big = arr[0];
    small = arr[0];

    for(int i =0; i<5; i++){
        if(arr[i] > big){
            big = arr[i];
        }
        if(arr[i] < small){
            small = arr[i];
        }
    }
    printf("Big = %d\nSmall = %d",big,small);

    return 0;
}
