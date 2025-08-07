#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct linknode{
    int data;
    struct linknode * ptr;
};
struct linknode * start= NULL, *temp, *newnode;

void createLink(){
    int n; char ch;
    printf("\nEnter the first element: ");
    scanf("%d",&n);
    start = (struct linknode *)malloc(sizeof(struct linknode));
    start->data=n;
    start->ptr=NULL;

    temp=start;
    printf("\nDo you want to continue?");
    ch=getche();
    //scanf("%c",&ch);
    while(ch=='y'||ch=='Y'){
        printf("\nNew Element: ");
        scanf("%d",&n);
        
        newnode=(struct linknode*)malloc(sizeof(struct linknode));
        newnode->data=n;
        newnode->ptr=NULL;

        temp->ptr=newnode;
        temp=temp->ptr;

        printf("\nWant to continue?Y/N");
        ch=getche();
    }
}
int main(){
    printf("creating linked list\n");
    createLink();
    return 0;
}