#include<stdio.h>
#include<conio.h>
#include<string.h>

struct marks{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
int main(){
    int i;
    struct marks student[3]={{12,14,14,0},{9,14,26,0},{15,13,19,0}};
    struct marks total;
    for(i=0;i<=2;i++){
        student[i].total = student[i].sub1+student[i].sub2+student[i].sub3;
        total.sub1 = total.sub1+ student[i].sub1;
        total.sub2 = total.sub2+ student[i].sub2;
        total.sub3 = total.sub3+ student[i].sub3;
        total.total = total.total + student[i].total; 
    }
    printf("\nStudent\tTotal\n\n");
    for(i=0; i<=2; i++)
    {
     printf("\nStudent %d total:%d\t",i+1,student[i].total);
    }
    printf("\n\nSubject totals: \n");
    printf("%s      %d\n%s      %d\n%s      %d\n",
    "Subject 1 ",total.sub1,
    "Subject 2 ",total.sub2,
    "Subject 3 ",total.sub3);
    printf("\nGrand Total = %d\n",total.total);
    return 0;
}