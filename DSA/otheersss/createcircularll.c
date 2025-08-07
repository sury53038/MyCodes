#include<stdio.h>
#include<conio.h>
struct Node{
    int data;
    struct Node *post;
};
void create(){
struct Node *start = NULL;
struct Node *temp,*newNode;

int n;char ch;
printf("\nEnter element: ");
scanf("%d",&n);
start = (struct Node*)malloc(sizeof(struct Node));
start->post=NULL;
start->data=n;

temp = start;
printf("\ndo you want to continue?");
ch=getche();
while(ch=='Y'||ch=='y'){
    printf("\nEnter new element: ");
    scanf("%d",&n);
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=n;
    newNode->post=start;
    temp->post=newNode;
    temp=temp->post;

    printf("\nDo you want to continue? ");
    ch=getche();
}
}