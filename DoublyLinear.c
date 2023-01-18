#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;     //*
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
void Display(PNODE head)
{
    printf("data from linkl list");

    while(head!=NULL)
    {
        printf("|%d|<=>",head->data);
        head=head->next;
    }
    printf("|NULL|");
}

int Count(PNODE head)
{
    int iCnt=0;

     while(head!=NULL)
    {
        iCnt++;

        head=head->next;
    }
    return iCnt;
}

void InsertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;   //*
    
    if(*head!=NULL)
    {
       
       newn->next=(*head);
       (*head)->prev=newn;   //*
       
      

    }
    (*head)=newn;

     printf("INSF\n");
}
void InsertLast(PPNODE head,int no)
{
     PNODE newn=NULL;
     PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;   //*


    if(*head==NULL)
    {
        
        *head=newn;
    }
    else
    {
        temp=*head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
            
         printf("INL");
        }
        temp->next=newn;
        newn->next=temp;
    }
}

void DelecteFirst(PPNODE head)
{}

void DeleteLast(PPNODE head)
{}

void InsertAtPos(PPNODE head,int no,int pos)
{}

void DeleteAtPos(PPNODE head,int pos)
{}

int main()
{
    PNODE first=NULL;
    int ret=0;

    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,51);
    InsertLast(&first,101);

    Display(first);
    ret=Count(first);

    printf("number of nodes :%d\n",ret);

    return 0;
}