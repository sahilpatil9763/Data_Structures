#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
  int Data;
  struct Node *Next;
};

void Insert_First(struct Node**,int Ele);
void Delete_First(struct Node**);
void Display_LL(struct Node*);

void Insert_First(struct Node **First,int Ele)
{
   struct Node *NewN = NULL;

   NewN = (struct Node*)malloc(sizeof(struct Node));

   if(NewN == NULL)
   {
     printf("\n\t Link List Creation Denied!!\n");
     return;
   }

   NewN->Data = Ele;
   NewN->Next = NULL;

   if(*First == NULL)
   {
     *First = NewN;
   }
   else
   {
     NewN->Next=*First;
     *First = NewN;
   }

   printf("\n\t %d Inserted Successfully.\n",NewN -> Data);
   return;
}

void Delete_First(struct Node **First)
{
   struct Node *Temp = *First;

   if(*First == NULL)
   {
     printf("\n\t Link List Is Already Empty.Can't Delete Any Element.\n");
     getch();
     return;
   }

   if(Temp->Next == NULL)
   {
     *First = NULL;
   }
   else
   {
     *First = Temp->Next;
   }

   printf("\n\t Removed Element From Link List Is %d\n",Temp->Data);
   free(Temp);

   return;
}


void Display_LL(struct Node *First)
{
   if(First == NULL)
   {
     printf("\n\t Link List Is Empty.Can't Display Any Element.\n");
   }
   else
   {
     printf("\n\n\t Link List Elements :\n\n");
     for(;First != NULL; First = First -> Next)
     {
       printf("\t\t |%d|\n", First -> Data);
     }

    }

   return;
}

int main()
{
  struct Node *Head = NULL;

  Delete_First(&Head);
  printf("\n=========================================================\n");

  Insert_First(&Head,11);
  Insert_First(&Head,21);

  printf("\n=========================================================\n");
  getch();

  Display_LL(Head);

  printf("\n=========================================================\n");
  getch();

  Delete_First(&Head);
  Display_LL(Head);

  printf("\n========================================================\n");
  getch();

  Delete_First(&Head);
  Insert_First(&Head,51);
  Insert_First(&Head,71);

  printf("\n========================================================\n");
  Display_LL(Head);

  printf("\n==============***************************==============\n");
  getch();

  return 0;
}
