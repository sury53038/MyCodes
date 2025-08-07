#include<stdio.h>
#include<conio.h>
#include<string.h>
 struct students_details{
        char name[30];
        int roll_no;
        float marks;


    };
int main(){
   
    struct students_details student1, student2, student3, student4;
    int x;
    printf("\ninputs please: ");
   scanf("%s", &student1.name);
    scanf("%d",&student1.roll_no);
    scanf("%f",&student1.marks);
    printf("\n");
    scanf("%s",&student2.name);
    scanf("%d",&student2.roll_no);
    scanf("%d",&student2.marks);
    printf("\n");
    scanf("%s",&student3.name);
    scanf("%d",&student3.roll_no);
    scanf("%d",&student3.marks);
    
    printf("\n\nEntered details are as follows: ");
    printf("\n%s %d %f",student1.name, student1.roll_no, student1.marks);
    printf("\n%s %d %f",student2.name, student2.roll_no, student2.marks);
    printf("\n%s %d %f",student3.name, student3.roll_no, student3.marks);
    return 0;
}