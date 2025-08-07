#include<stdio.h>
#include<conio.h>
#include<string.h>

struct csc_data{

char name[30];
int roll_no;
int marks;
};
struct csc_data student1,student2,student3;
int main(){
    int x;
    struct csc_data student1={"Surya",176,99};
    struct csc_data student2={"Pranay", 134,99};
    struct csc_data student3;

    student3 = student1;
    
    x=((student2.marks == student1.marks)&&(student2.roll_no == student1.roll_no))?1:0;

    if(x==1){
        printf("\nStudent 3 and Student 1 are the same person.");
        printf("\n%d %s %d", student1.roll_no, student1.name, student1.marks);
    }
    else{
        printf("\nStudent 3 and Student 1 are the different person.");
    }
    return 0;
}