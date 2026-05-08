# include<stdio.h>
void _square(int *n);
int main(){
    int n = 4;
    _square (&n);

    return 0;
}
// Call by reference
void _square(int *n){
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}

// Swap 2 numbers pass by reference
// void swap(int *a, int *b);
// int main(){
//     int a, b;
//     printf("Enter the 2 numbers: ");
//     scanf("%d %d", &a, &b); 

//     printf("a = %d & b = %d\n", a, b);
//     swap(&a, &b);

//     return 0;
// }
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("*a = %d & *b = %d\n", *a, *b);
// }