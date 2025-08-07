#include<stdio.h>
#include<conio.h>
void printHello(); //this is function prototype.
void printGoodbye();
int main(){
    printHello();
    printGoodbye();
    printHello();
    return 0;
}
void printHello() //this is function defination.
{
    printf("hello world");
    printf("\nthis program is created by Surya");
}
void printGoodbye()
{
    printf("\nGoodbye Ma'm, see you soon.\n");
}