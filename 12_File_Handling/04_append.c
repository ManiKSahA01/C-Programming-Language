#include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("Test.txt", "a");

//     fprintf(fptr, "%c", 'A');
//     fprintf(fptr, "%c", 'p');
//     fprintf(fptr, "%c", 'p');
//     fprintf(fptr, "%c", 'l');
//     fprintf(fptr, "%c", 'e');

//     fclose(fptr);
//     return 0;
// }


int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","a");

    char name[] = "Mani";
    for (int i=0; name[i] !='\0'; i++){
        fprintf(fptr, "%c",name[i]);
    }
    fclose(fptr);

    return 0;
}

