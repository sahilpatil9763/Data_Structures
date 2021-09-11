#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
  int Data;
  struct Node *Next;
};

void Insert_First(struct Node**,int);
void Display_Link_List(struct Node*);

void Insert_First(struct Node** First,int Ele)
{
   struct Node *NewN=NULL;

   NewN = (struct Node*)malloc(sizeof(struct Node*));

   if(NewN == NULL)
   {
     printf("\n Node not Created..!!\n");
     getch();
     return;
   }

   NewN->Data = Ele;
   NewN->Next = NULL;

   if(*First==NULL)
   {
     *First=NewN;
   }
   else
   {
     NewN->Next = *First;
     *First = NewN;
   }

   getch();
   printf("\n\n\t\t %d Inserted Successfully.\n",NewN->Data);
   return;
}

void Display_LL(struct Node *First)
{

   if(First==NULL)
   {
     printf("\n\tLink List Is Empty.Can't Display Any Element\n");
   }
   else
   {
     printf("\n\t\t Link List Elements Are : \n");
     for(;First!=NULL;First=First->Next)
     {
       printf("\n\t\t\t |%d|",First->Data);
     }
   }
   getch();
}

int main()
{
  struct Node* Head=NULL;

  Display_LL(Head);
  printf("\n\t-----------------------------------------\n");

  Insert_First(&Head,10);

  Display_LL(Head);
  printf("\n\t=========================================\n");

  Insert_First(&Head,20);
  Insert_First(&Head,30);
  Insert_First(&Head,40);

  printf("\n\t===========================================\n");
  getch();

  Display_LL(Head);
  printf("\n\t------------*********************------------\n");

  return 0;
}
