#include<stdio.h>
int main(){
    // int n, count=0;
    // printf("Enter the number: ");
    // scanf("%d",&n);

    // for(int i =1; i<=n; i++){
    //     if(n%i==0){
    //         count++;
    //     }
    // }
    // if(count==2){
    //     printf("It is prime number: %d",n);
    // }
    // else{
    //     printf("It is not prime number: %d",n);
    // }

// Print All Prime Numbers upto n...
    int n, flag, count;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i =1; i<=n; i++){
        flag =0;
        for (int j =1; j<=i;j++){
            if(i%j == 0){
                flag++;
            }
        }
        if(flag == 2){
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal prime number is = %d", count);
    
    return 0;
}
