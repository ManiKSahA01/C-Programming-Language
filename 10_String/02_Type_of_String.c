#include<stdio.h>
#include<string.h>
int main(){
// 1> Lenght of string find... strlen():-
    // char str[20];
    // printf("Enter the name: ");
    // scanf("%s",str);

    // printf("Name lenght is = %d", strlen(str));

// 2> Copy one string to another... strcpy():-
//     char str1[20], str2[20];
//     printf("Enter the 2 name: ");
//     scanf("%s %s",str1, str2);

//    //str2[0] = 'R'; // Replace the character
//     strcpy(str1,str2);
//     printf("Name copy str1 is = %s",str1);

// 3> Concatenate first string to second string... strcat():-
    // char str1[20], str2[20];
    // printf("Enter the 2 name: ");
    // scanf("%s %s",str1, str2);

    // strcat(str1,str2);
    // printf("Name joined sring is = %s",str1);

// 4> Compare two string... strcmp():-
    char str1[20], str2[20];

    printf("Enter the 2 names: ");
    scanf("%s %s", str1, str2);

    // printf("Result is = %d", strcmp(str1, str2));
    if(strcmp(str1, str2)==0){
        printf("String is equal = %d",strcmp(str1, str2));
    }
    else{
        printf("String is not equal = %d",strcmp(str1, str2));
    }

// 5> Revers string... strrev():-
    // char str[20];
    // printf("Enter the name: ");
    // scanf("%s",str);

    // printf("Name revers is = %s",strrev(str));

// 6> Convert to uppercase... strupr():-
    // char str[20];
    // printf("Enter the name: ");
    // scanf("%s",str);

    // printf("Lower Case to uppercase = %s",strupr(str));

// 7> Convert to lowcase... strlwr():-
    // char str[20];
    // printf("Enter the name: ");
    // scanf("%s",str);

    // printf("Upper Case to lowercase = %s",strlwr(str));

    return 0;
}
