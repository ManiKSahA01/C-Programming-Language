# include<stdio.h>
int main(){
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", & n);

    // for (int i = 1; i <= n; i++){
    //     printf("%d\n", i);    
    //     if (i == 10){
    //         continue;        
    //     }      
    // }
    
/*Ques : WAP to print odd numbers from 1 to
100.*/
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (int i =0; i<=n; i++){
    //     if(i%2 == 0){
    //         continue;
    //     }
    //     printf("%d ",i);     
    // }

/*Ques : WAP to print even numbers from 1 to
100.*/
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i =0; i<n; i++){
        if(i%2 == 0){
            printf("%d ",i);     
            continue;
        }
    }

    return 0;
}
