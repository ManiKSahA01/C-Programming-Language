#include<stdio.h>
#include<string.h>
// Question 01: write a program to store the data os 3 student.
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main(){
//     printf("1st student marks\n");
//     struct student s1;
    
//     s1.roll = 4354;
//     s1.cgpa = 9.2;
//     strcpy(s1.name, "Mani");
    
//     printf("student name: %s\n", s1.name);
//     printf("student roll: %d\n", s1.roll);
//     printf("studnt cgpa: %f\n", s1.cgpa);
//     printf("\n");
    
//     printf("2nd student marks\n");
//     struct student s2;
//     s2.roll = 4556;
//     s2.cgpa = 8.5;
//     strcpy(s2.name, "Manish");
    
//     printf("student name: %s\n", s2.name);
//     printf("student roll: %d\n", s2.roll);
//     printf("student cgpa: %f\n", s2.cgpa);
//     printf("\n");
    
//     printf("3nd student marks\n");
//     struct student s3;
//     s3.roll = 7506;
//     s3.cgpa = 8.7;
//     strcpy(s3.name, "Rakesh");
    
//     printf("student name: %s\n", s3.name);
//     printf("student roll: %d\n", s3.roll);
//     printf("student cgpa: %f\n", s3.cgpa);
    
//     printf("End the programs...");
//     return 0;
// }

// Question 02: Enter address (house no, block, city, state) of 5 pepole.
// struct studentAdress{
//     char name[100];
//     char state[100];
//     char city[100];
//     char adress[100];
//     int blockNo;
//     int houseNo;
// };
// void printAdd(struct studentAdress adds);
// int main(){
//     struct studentAdress adds[5];
//     printf("1st Sutdent adress:\n");
//     scanf("%s", adds[0].name);
//     scanf("%s", adds[0].state);
//     scanf("%s", adds[0].city);
//     scanf("%s", adds[0].adress);
//     scanf("%d", &adds[0].blockNo);
//     scanf("%d", &adds[0].houseNo);

//     printf("2nd Sutdent adress:\n");
//     scanf("%s", adds[1].name);
//     scanf("%s", adds[1].state);
//     scanf("%s", adds[1].city);
//     scanf("%s", adds[1].adress);
//     scanf("%d", &adds[1].blockNo);
//     scanf("%d", &adds[1].houseNo);

//     printf("3nd Sutdent adress:\n");
//     scanf("%s", adds[2].name);
//     scanf("%s", adds[2].state);
//     scanf("%s", adds[2].city);
//     scanf("%s", adds[2].adress);
//     scanf("%d", &adds[2].blockNo);
//     scanf("%d", &adds[2].houseNo);

//     printf("4nd Sutdent adress:\n");
//     scanf("%s", adds[3].name);
//     scanf("%s", adds[3].state);
//     scanf("%s", adds[3].city);
//     scanf("%s", adds[3].adress);
//     scanf("%d", &adds[3].blockNo);
//     scanf("%d", &adds[3].houseNo);

//     printf("5th Sutdent adress:\n");
//     scanf("%s", adds[4].name);
//     scanf("%s", adds[4].state);
//     scanf("%s", adds[4].city);
//     scanf("%s", adds[4].adress);
//     scanf("%d", &adds[4].blockNo);
//     scanf("%d", &adds[4].houseNo);

//     printAdd(adds[0]);
//     printAdd(adds[1]);
//     printAdd(adds[2]);
//     printAdd(adds[3]);
//     printAdd(adds[4]);
       
//     return 0;
// }
// void printAdd(struct studentAdress adds){
//     printf("Adress is: %s, %s, %s, %s, %d, %d\n", adds.name, adds.state,
//     adds.city, adds.adress, adds.blockNo, adds.houseNo);
// }


/* Question 03: Create a strcuture to store vectors. Then make a
function to return sum of 2 vectores..*/
// struct vector{
//     int x;
//     int y;
// };
// void calSum(struct vector v1, struct vector v2, struct vector sum);
// int main(){
//     struct vector v1 = {2, 4};
//     struct vector v2 = {5, 7};
//     struct vector sum = {0};

//     calSum(v1, v2, sum);
//     return 0;
// }
// void calSum(struct vector v1, struct vector v2, struct vector sum){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("sum is x: %d\n", sum.x);
//     printf("sum is y: %d\n", sum.y);
// }


/*Question 04: Create a structure to store complex number.
(use arrow opertor)*/
// struct complex{
//     int real;
//     int ing;
// };
// int main(){
//     struct complex number1 = {3, 5};
//     struct complex *ptr = &number1;

//     printf("real number = %d\n",ptr->real);
//     printf("img number = %d\n",ptr->ing);

//     return 0;
// }


// Question 05: You have to store the marks of 30 student in class.
// what will you use?
// a) array of 30 floats
// b) strcture

struct Student {
    char name[100];
    float marks;
};
int main() {
    struct Student s[5]; 

    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks);
    }
    printf("\n--- Marks of 5 Students ---\n");
    for (int i = 0; i < 5; i++) {
        printf("%d %s %f\n", i + 1, s[i].name, s[i].marks);
    }
    return 0;
}

// Question 06:

// typedef struct bankAccount{
//     int accountNo;
//     char name[100];
// } acc;
// int main(){
//     acc acc1 = {69694, "Mani"};

//     printf("name is: %s\n", acc1.name);
//     printf("Account number is: %d\n", acc1.accountNo);
//     return 0;
// }




