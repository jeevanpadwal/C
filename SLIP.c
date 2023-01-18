#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->next=NULL;
    newn->data=no;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }
    
}

void Display(PNODE head)
{
    while(head!=NULL)
    {
        printf("|%d|->",head->data);
        head=head->next;
    }
    printf("|NULL|\n");

}

int Count(PNODE head)
{
    int iCnt=0;

     while(head!=NULL)
    {
        iCnt++;
        
        head =  head->next;
    }
    return iCnt;
}

void InsertLast(PPNODE head,int no)
{
     PNODE newn=NULL;
     PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->next=NULL;
    newn->data=no;

    temp =*head;

     while(temp->next!=NULL)
     {
        temp=temp->next;
     }
     temp->next=newn;

}
void InsertAtPos(PPNODE head,int no,int pos)
{
     PNODE newn=NULL;
     PNODE temp=NULL;
     int iCnt=0;
     int size=0;
      temp=*head;

     size=Count(*head);

  
    if(pos<1||pos>(size+1))
    {
        printf("Invalid posion");
        return;
    }
    else
   {

     newn=(PNODE)malloc(sizeof(NODE));

    newn->next=NULL;
    newn->data=no;

    for(iCnt=1;iCnt<pos-1;iCnt++)
    {
        temp=temp->next;
    }
    newn->next=temp->next;
    temp->next=newn;
   }

}
void DeletFirst(PPNODE head)

{
    PNODE temp=NULL;

    temp =*head;

    *head=temp->next;
    free(temp);
}

void DeletLast(PPNODE head)
{
    PNODE temp=NULL;
    
  temp =*head;

     while(temp->next->next!=NULL)
     {
        temp=temp->next;
     }
     temp->next=NULL;

     free(temp->next);

}

void DeletAtPos(PPNODE head,int pos)
{
     int size=0,iCnt=0;
    size=Count(*head);
    PNODE temp=NULL;
    PNODE tempdelete=NULL;

     size=Count(*head);

    if((pos<1)||(pos>(size)))
    {
        printf("Position is invalid\n");
        return;
    }
    if(pos==1)
    {
        DeletFirst(head);
    }
    else if(pos==(size))
    {
        DeletLast(head);
    }
    else
    {
        tempdelete=temp->next;
        temp=*head;
        for(iCnt=1;iCnt<=pos;iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(tempdelete);
        
    }

}

int main()
{
  PNODE first=NULL;
  int iRet=0;
  InsertFirst(&first,1);
InsertFirst(&first,2);
InsertFirst(&first,3);
InsertFirst(&first,4);
InsertFirst(&first,5);

 
  Display(first);
  iRet=Count(first);
  printf("elements in link list is : %d\n",iRet);


  Display(first);
  iRet=Count(first);
  printf("elements in link list is : %d\n",iRet);

  InsertLast(&first,89);
  Display(first);
  iRet=Count(first);
  printf("elements in link list is : %d\n",iRet);

  InsertAtPos(&first,54,3);
  Display(first);
  iRet=Count(first);
  printf("elements in link list is : %d\n",iRet);

  DeletFirst(&first);
   Display(first);
  iRet=Count(first);
  printf("elements in link list is : %d\n",iRet);

  DeletLast(&first);
  Display(first);
  iRet=Count(first);
  printf("elements in link list is : %d\n",iRet);

  


    return 0;
}