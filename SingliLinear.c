#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
  PNODE newn=NULL;
  newn=(PNODE)malloc(sizeof(PNODE));//newn=(struct node*)malloc(12);

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }   
    else
    {
        newn -> next =*head;
        *head=newn;

    }

}


void InsertLast(PPNODE head,int no)
{
  
  PNODE newn=NULL;
  PNODE temp=NULL;  
  newn=(PNODE)malloc(sizeof(PNODE));//newn=(struct node*)malloc(12);

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }  
    else
    {
       temp = *head;

       while(temp->next!=NULL)
       {
           temp = temp->next;
       }
       temp->next=newn;
    } 
     
}

void Display(PNODE head)
{
   printf("Elements are :\n");

   while(head!=NULL)
   {
       printf("|%d|->",head->data);
       head=head->next;
   }
   printf("NULL\n");
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
void DeletFirst(PPNODE head)
{
     PNODE temp=NULL;
  if(*head==NULL)
  {
      return;
  } 
  else
  {
     
       temp=*head;
      *head=temp->next;
      free(temp);
  }
   

}

void DeletLast(PPNODE head)
{
    PNODE temp=NULL;
    if(*head== NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
      free(*head);
      *head=NULL;    
    }
    else
    {
        temp=*head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

void InsertAtPos(PPNODE head,int no,int pos)
{
    int size=0,iCnt=0;
    size=Count(*head);
    PNODE newn=NULL;
    PNODE temp=NULL;

    if((pos<1)||(pos>(size+1)))
    {
        printf("Position is invalid\n");
        return;
    }
    if(pos==1)
    {
        InsertFirst(head,no);
    }
    else if(pos==(size+1))
    {
        InsertLast(head,no);
    }
    else
    {

        newn=NULL;
        newn=(PNODE)malloc(sizeof(PNODE));//newn=(struct node*)malloc(12);

        newn->data=no;
        newn->next=NULL;

        temp=*head;
        for(iCnt=1;iCnt<(pos-1);iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }

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
       
       
         printf("else madhe dap");
        temp=*head;
        
        for(iCnt=1;iCnt<=(pos-1);iCnt++)
        {
            temp=temp->next;
        }
         tempdelete=temp->next;
        temp->next=temp->next->next;
        free(tempdelete);
        
    }

}

int main()
{
   PNODE first = NULL;
   int ret=0;

   InsertFirst(&first,101);// call by addrss
    InsertFirst(&first,51);
     InsertFirst(&first,21);
      InsertFirst(&first,11);

      InsertAtPos(&first,75,3);

     DeletAtPos(&first,3);
     Display(first);//call by address
    ret = Count(first);

      printf("Number of node are : %d\n",ret);

      InsertFirst(&first,1);

      Display(first);//call by address
      ret = Count(first);

      printf("Number of node are : %d\n",ret);

      InsertLast(&first,111);
      InsertLast(&first,121);

      Display(first);

      ret=Count(first);

      printf("Number of nodes :",ret);

      DeletFirst(&first);
       DeletFirst(&first);

       Display(first);
    
      ret=Count(first);

    printf("Number of nodes :",ret);

    DeletLast(&first);
     Display(first);
    
      ret=Count(first);

    printf("Number of nodes :",ret);

    return 0;
}