#include<stdio.h>
struct student{
    int SNo;
    char name[20];
    int roll;
    int m1, m2, m3;
};
int main(){
    struct student s;
    FILE *fptr;
    fptr = fopen("student.dat","w");
    
    for(int i=0;i<2;i++){
        printf("Enter the %d student information...\n",s.SNo=i+1);
        s.SNo = i+1;

        printf("Enter Student Name: ");
        scanf("%s",s.name);

        printf("Enter Roll No: ");
        scanf("%d",&s.roll);

        printf("Enter C Program Marks: ");
        scanf("%d",&s.m1);

        printf("Enter FIT Marks: ");
        scanf("%d",&s.m2);

        printf("Enter English Marks: ");
        scanf("%d",&s.m3);
        printf("\n");
    }
    fprintf(fptr,"\nSNo\tName\tRollNo\tCProgram\tFIT\tEnglish\n");
    for(int i=0;i<2;i++){
        fprintf(fptr,"%d\t%s\t%d\t%d\t%d\t%d\n",
            s.SNo=i+1,s.name,s.roll,s.m1,s.m2,s.m3);
    }
    fclose(fptr);
    return 0;
}
