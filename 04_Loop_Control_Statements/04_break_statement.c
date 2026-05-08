# include<stdio.h>
int main(){
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", & n);

    // for (int i =1; i<n; i++){
    //     printf("%d\n", i);
    //     if (i==10){
    //         break;
    //     }
    // }
    // printf("end...");

/*Ques : WAP to check if a number is prime or
not.*/
    int n, a=0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i=2; i<=n-1; i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(n==1){
        printf("1 is a neither prime number...\n");
    }
    if (a==0){
        printf("prime number...");
    }
    else{
        printf("Not a prime number...");
    }
    return 0;
}
