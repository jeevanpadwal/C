//singli linear link list

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
/*
   allocate memory for node 
   initialize the node 
   cheak LL is empty or not 
   LL is empty the new node is first node 
   LL contains atleast one node 
*/
void InsertFirst(PPNODE Head,int iNo)
{
   PNODE newn =NULL;
   newn=(PNODE)malloc(sizeof(NODE));

   newn->data=iNo;
   newn->next=NULL;

   if(*Head==NULL)
   {
       *Head=newn;
   }
   else
   {
       newn->next=*Head;
       *Head=newn;
   }

}

int main()
{
    PNODE First =NULL; 

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    return 0;
}