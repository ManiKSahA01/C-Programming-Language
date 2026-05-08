#include<stdio.h>
#include<string.h>
/*Ques : Create a structure type ‘book’ with name, price
and number of pages as its attributes*/
// struct book{
//     char name[20];
//     float price;
//     int pages;
// } a, b;
// int main(){
//     printf("1st Book information...\n");
//     strcpy(a.name, "Math");
//     a.price = 876.6;
//     a.pages = 6908;

//     printf("Book name is: %s\n",a.name);
//     printf("Book price is: %f\n",a.price);
//     printf("Book pages is: %d\n",a.pages);

//     printf("\n");

//     printf("2nd Book information...\n");
//     strcpy(b.name, "Physics");
//     b.price = 566.6;
//     b.pages = 9908;

//     printf("Book name is: %s\n",b.name);
//     printf("Book price is: %f\n",b.price);
//     printf("Book pages is: %d",b.pages);

//     return 0;
// }

/*Ques : Create a structure type ‘Person’ with name,
salary and age as its attributes. Declare and initialize 2
variables for this. Print the name of first person and age
of the other.*/
struct emp{
    char name[20];
    float salary;
    int age;
} e1;
int main(){
    printf("Person information...\n");
    strcpy(e1.name, "Mani");
    e1.age = 24;
    e1.salary = 89769.5;

    printf("Name is: %s\n",e1.name);
    printf("Age is: %d\n",e1.age);
    printf("Salary is: %f\n",e1.salary);
    return 0;
}
