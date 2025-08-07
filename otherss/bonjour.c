#include <stdio.h>
#include <conio.h>
void namaste();
void bonjour();
int main()
{
    char ch, B, F;
    printf("Enter your nationality \nfor French press 'F' and for Bharat press 'B':\n");
    scanf("%c", &ch);
    if (ch == 'B' || ch=='b')
    {
        namaste();
    }
    else if( ch == 'f'|| ch== 'F')
    {
        bonjour();
    }
    else
    {
        printf("invalid choice");
    }
}
void namaste()
{
    printf("\nNamaste Bharat");
    bonjour();
}
void bonjour()
{
    printf("\nBonjour France");
}