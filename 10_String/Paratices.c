#include<stdio.h>
#include<string.h>
/* Question 01: Create a String firstName & 
lastName to store details of user & print all the characters using a loop.*/
// void printString(char arr[]);
// int main(){
//     char firstName[] = "Mani ";
//     char midelName[] = "Kumar ";
//     char lastName[] = "Sah";

//     printString(firstName);
//     printString(midelName);
//     printString(lastName);
    
//     return 0;
// }
// void printString(char arr[]){
//     for (int i=0; arr[i] !='\0'; i++){
//         printf("%c", arr[i]);
//     } 
//     printf("\n");
// }

// Question 02: 
// int main(){
//     char firstName[30];

//     printf("Enter the name: ");
//     scanf("%s", firstName);
//     printf("Your name is: %s", firstName);
    
//     return 0;
// }

// Question 03: Make a program that input user's name & print its length...

int countLength(char arr[]);
int main(){
    char name[100];
    printf("Enter the name: ");

    fgets(name, 100, stdin);
    printf("Length is %d", countLength(name));
  
    return 0;
}
int countLength(char arr[]){ 
    int count =0;
    for (int i=0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;  
}

// Quuestion 04: Take a string input from the user using %c...

// int main(){
//     char str[100];
//     char ch;
//     int i = 0;

//     while (ch != '\n'){
//         scanf("%c", &ch);
//         str [i] = ch;
//         i++;
//     }
//     str[i] ='\0';
//     printf(str);

//     return 0;
// }

// Question 05: 
// void salting(char password[]);

// int main(){
//     char password[100];
//     printf("Enter the password: ");
//     scanf("%s", password);
    
//     salting(password);
    
//     return 0;
// }
// void salting(char password[]){
//     char salt[] = "123";
//     char newPass[200];

//     strcpy(newPass, password);
//     strcat(newPass, salt);
//     puts(newPass);
// }

// Question 06: write a function name slice, which take a string & return a 
// sliced sting from index n to m.
// void slice(char str[], int n, int m);

// int main(){
//     char str[] ="HelloWorld";
//     slice(str, 3, 6);

//     return 0;
// }
// void slice(char str[], int n, int m){
//     char newStr[100];
//     int j =0;
//     for (int i =n; i<=m; i++, j++){
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';
//     printf(newStr);
// }

// Question 07: write a function to count the occurrence of vovals in a string.
// int countVoweles(char str[]);
// int main(){
//     char str[] = "HelloWorld";
//     printf("Vowels are: %d", countVoweles(str));
    
//     return 0;
// }
// int countVoweles(char str[]){
//     int count = 0;
//     for (int i =0; str[i] !='\0'; i++){
//         if (str[i]=='a'|| str[i]=='e' || str[i]=='i' ||
//         str[i]=='o' || str[i]=='u'){
//             count++;
//         }
//     }
//     return count;
// }

// Question 08: check a given character is present in a or not..
// void checkChar(char str[], char ch);
// int main(){
//     char str[] = "HelloWorld";
//     char ch;
//     printf("Enter the character: ");
//     scanf("%c", &ch);

//     checkChar(str, ch);
    
//     return 0;
// }
// void checkChar(char str[], char ch){
//     for (int i=0; str[i] !='\0'; i++){
//         if (str[i] == ch){
//             printf("Charctr is Present");
//             return;
//         }
//     }
//     printf("Charcter is not present");

// }

//Question :-
// void printString(char arr[]);
// int main(){
//     char name[] = "Mani";
    
//     printString(name);
//     return 0;
// }
// void printString(char arr[]){
//     for (int i =0; arr[i] !='\0'; i++){
//         printf("%c", arr[i]);
//     }
// }