# include<stdio.h>
int main(){
/*Can we use string (character arrays) as
pointers?*/
    // char str[] = "Hello World";
    // char *ptr = str;
    // for (int i=0; ptr[i] != '\0'; i++){
    //     printf("%c",ptr[i]);
    // }

// Change 'A' 
    // char canChange[] = "Hello world";
    // puts(canChange);

    // canChange[0] = 'A';
    // printf("%s",canChange);

// 01: Can change
    // char *canChange = "Hello world";
    // puts(canChange);

    // canChange = "World Hello";
    // printf("%s",canChange);

// 02: Connot Change
    // char cannotChange = "Hello world";
    // printf("%s\n",cannotChange);

    // cannotChange = "World Hello"; // no change the value
    // puts(cannotChange);

//Implement: Copy one string to another
    // char s1[] = "Hello World";
    // char *s2 = s1;

    // s1[0] = 'A';
    // printf("%s",s2);

    return 0;
}
