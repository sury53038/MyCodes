#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    struct book_detail{
        char name[30];
        char author[30];
        int pages;
        float price;
    };
    struct book_detail book1, book2, book3;

    // scanf("%s\n", book1.name);
    // scanf("%s\n",book1.author);
    // strcpy(book1.name, "Pranay's LOVE DIARIES part 1");
    // strcpy(book1.author, "t_heartless_soul");
    // book1.pages = 150;
    // book1.price = 250.36;
    struct personal{
        char name[30];
        int day;
        int month;
        int year;
        float salary;
    };
    struct personal person;
    printf("\nInput values: ");
    scanf("%s %d %d %d %f",person.name,&person.day,&person.month,&person.year,&person.salary);
    printf("%s %d %d %d %f\n",person.name,person.day,person.month,person.year,person.salary);
    return 0;
}