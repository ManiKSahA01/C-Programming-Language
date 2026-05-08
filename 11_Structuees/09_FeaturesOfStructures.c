#include<stdio.h>
#include<string.h>
/*Ques : Create a structure type ‘book’ with name, price
and number of pages as its attributes*/
struct book{
    char name[20];
    float price;
    int pages;
} a, b;
int main(){
    printf("1st Book information...\n");
    strcpy(a.name, "Math");
    a.price = 876.6;
    a.pages = 6908;

    printf("Book name is: %s\n",a.name);
    printf("Book price is: %f\n",a.price);
    printf("Book pages is: %d\n",a.pages);

    printf("\n2nd Book information...\n");
    b=a; // a ka same data b me copy, Deep copy
    strcpy(b.name, "Physics");

    printf("Book name is: %s\n",b.name);
    printf("Book price is: %f\n",b.price);
    printf("Book pages is: %d",b.pages);

    return 0;
}

/*Ques : Create a structure ‘date’ that contains three
members namely date, month and year. Create 2 structure
variables with different dates and now compare the two. If
the dates are equal then display message as "Equal"
otherwise "Unequal".*/
// struct members{
//     int date;
//     int month;
//     int year;
// }a, b, c;
// int main(){
//     printf("Member information...\n");
//     a.date = 05;
//     a.month = 11;
//     a.year = 2024;

//     b.date = 10;
//     b.month = 12;
//     b.year = 2025;

//     if (a.date==b.date && a.month==b.month && a.year && b.year){
//         printf("A and B. The date are same...");
//     }
//     else{
//         printf("A and B. The date are not same...");
//     }
//     printf("\n");
// /*Ques : Now create another structure variable by assigning
// the first date to it. Compare the first and third dates.*/
//     c=a;
//     if (a.date==c.date && a.month==c.month && a.year && c.year){
//         printf("C The date are same...");
//     }
//     else{
//         printf("The date are not same...");
//     }
//     return 0;
// }
