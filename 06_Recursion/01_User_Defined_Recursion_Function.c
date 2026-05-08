#include<stdio.h>
void rec(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    rec(n);
    return 0;
}
void rec(int n){  // Recursion function
    // for (int i =1; i<=n; i++){
        // printf("Good Morning...\n");
    // }
    if (n == 0){
        return;
    }
    printf("Hello world...\n");
    rec(n-1);
}

// Ques : Print using recursion n times numbers Decreasing - Increasinga..
// void num(int n);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     num(n);
//     return 0;
// }
// void num(int n){
//     // for (int i =1; i<=n; i++){
//     //     printf("%d\n",i);
//     // }
//     // for (int j =n; j>=1; j--){
//     //     printf("%d\n",j);
//     // }
//     if(n == 0){
//         return;
//     }
//     printf("%d\n",n); // 3 to 1
//     num(n-1);  
//     printf("%d\n",n); // 1 to 3
// }

// Ques : Print sum from 1 to n (Parameterised)...
// void sum(int n, int s);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     sum(n, 0);
//     return 0;
// }
// void sum(int n, int s){
//     // for (int i=1; i<=n; i++){
//     //     s = s+i;
//     // }
//     // printf("%d\n",s);
    
//     if(n == 0){
//         printf("%d\n",s);
//         return;
//     }
//     sum(n-1, s+n);
// }

//Ques : Print sum of factroil  from 1 to n (Return type)
// int sumFact(int n);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int sum = sumFact(n);
//     printf("%d",sum);
//     return 0;
// }
// int sumFact(int n){
//     // int sumFact =1;
//     // for (int i=1; i<=n; i++){
//     //     sumFact = sumFact+i;
//     //     // printf("%d\n",sumFact);
//     // }
//     // return sumFact;
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     int sum = n *sumFact(n-1);
//     return sum;
// }

/*Ques : Make a function which calculates ‘a’
raised to the power ‘b’ using recursion.*/
// int calculatePower(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter the 2 number: ");
//     scanf("%d %d", &a, &b);

//     int result = calculatePower(a, b);
//     printf("%d\n", result);
//     return 0;
// }
// int calculatePower(int a, int b){
//     // int power =1;
//     // for (int i =1; i<=b; i++){
//     //     power = power *a;
//     // }
//     if (b == 0){
//         return 1;
//     }
//     int power = a *calculatePower(a,b -1);
//     return power;
// }

/*Ques: Stair Path — A person can take single step or double step. 
Find number of ways to reach the nth stair.*/
// int stairPath(int n);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     printf("%d",stairPath(n));
//     return 0;
// }
// int stairPath(int n){
//     // if (n == 0){
//     //     return 1;
//     // }
//     if (n <= 2){
//         return n;
//     }
//     int totalway = stairPath(n-1) + stairPath(n-2);
//     return totalway;
// }

//Ques : Power function (logarithmic)
// int powerLog(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter the 2 number: ");
//     scanf("%d %d", &a, &b);

//     printf("%d",powerLog(a, b));
//     return 0;
// }
// int powerLog(int a, int b){
//     if(b == 0){
//         return 1;
//     }
//     int power = powerLog(a,b/2);
//     if(b%2 == 0){
//         return power*power;
//     }
//     else{
//         return power*power*a;
//         }
// }

// Ques: Pre In Post...
// void preInPost(int n);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     preInPost(n);
//     return 0;
// }
// void preInPost(int n){
//     if (n == 0){
//         return;
//     }
//     printf("Pre: %d\n", n);
//     preInPost(n-1);
//     printf("In: %d\n",n);
//     preInPost(n-1);
//     printf("Post: %d\n");

//     return;
// }

/*Ques : Print zig-zag
Input Output
1 111
2 211121112
3 321112111232111211123
4 432111211123211121112343211121112321112111234 */
// void zigZag(int n);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     zigZag(n);
//     return 0;
// }
// void zigZag(int n){
//     if(n == 0){
//         return;
//     }
//     printf("%d ",n);
//     zigZag(n-1);
//     printf("%d ",n);
//     zigZag(n-1);
//     printf("%d ",n);
//     return;
// }

// Ques : Tower of HANOI...
// void tower(int n, char a, char b, char c);
// int count = 0;
// int main(){
//     int n;
//     printf("Enter the numbehr: ");
//     scanf("%d", &n);
    
//     tower(n, 'A','B','C');
//     printf("Total moves: %d\n",count);
//     return 0;
// }
// void tower(int n, char a, char b, char c){
//     if(n == 0){
//         return;
//     }
//     tower(n-1,a,c,b);
//     printf("%c -> %c\n",a,c);
//     count++;
//     tower(n-1,b,a,c);
//     return;
// }
