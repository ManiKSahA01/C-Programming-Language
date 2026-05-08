#include<stdio.h>
//1.> No Argument and No return value...  No Passing Argument...
// void sum();
// int main(){
//     sum();
    
//     return 0;
// }
// void sum(){
//     int a, b, sum;
//     printf("Enter the 2 number: ");
//     scanf("%d %d",&a, &b);
    
//     sum = a+b;
//     printf("Sum = %d",sum);
// }

//2.> No Argument whit return value...  No Passing Argument...
// int sum();
// int main() {
//     int result;
//     result = sum();     // function call
//     printf("Sum = %d", result);
//     return 0;
// }
// int sum() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     return a + b;       // return value
// }

//3.> whit Argument No return value...  Passing Argument...
void sum(int a, int b);
int main(){
    int a, b;
    printf("Enter the 2 number: ");
    scanf("%d %d", &a, &b);

    sum(a, b);   // function call with arguments
    return 0;
}
void sum(int a, int b){
    int sum;
    sum = a + b;
    printf("Sum = %d", sum);
}

//4.> whit Argument whit return value...  Passing Argument...
// int sum(int a, int b);
// int main() {
//     int x, y, result;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);   // scanf method

//     result = sum(x, y);       // function call with arguments
//     printf("Sum = %d", result);

//     return 0;
// }
// int sum(int a, int b) {
//     return a + b;   // return value
// }

/*How functions work : ek ke andar doosra,
doosre ke andar teesra*/
// void englend(){
//     printf("You are in Englend...\n"); // 6
//     return; // 7
// }
// void australia(){
//     printf("You are in Australia...\n"); //4
//     englend(); // calling englend 5
//     return; // 8
// }
// void india(){
//     printf("You are in india...\n"); // 2
//     australia(); // calling australia 3
//     return; // 9
// }
// int main(){
//     australia(); // calling india 1
//     return 0; // 10
// }

// // Question 02
// void printTable(int n);  // Arguments
// int main(){    
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
    
//     printTable(n); // argument/ actual parameter
//     return 0;
// }
// void printTable(int n){  // parameter/ formal parameter
//     for (int i =1; i<=10; i++){
//         printf("%d X %d =%d\n", n, i, i*n);   
//     }
//     printf("Thanks!");
// }

// Question 03:
// void calculatePrice(float value);
// int main(){
//     float value = 100.0;
//     calculatePrice(value);
//     printf("value is: %f\n", value);

//     return 0;
// }
// void calculatePrice(float value){
//     value = value +(0.18 * value);
//     printf("Final price is: %f\n", value);
// }


