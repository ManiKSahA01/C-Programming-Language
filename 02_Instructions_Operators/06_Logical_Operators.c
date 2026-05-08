#include<stdio.h>
int main(){
    printf("%d\n", (5>4) && (3>7));
    printf("%d\n", (5>4) || (3>7));
    printf("%d\n", !(5>4) && (3>7));
    printf("%d\n", !(5>4) || (3>7));

    return 0;
}
