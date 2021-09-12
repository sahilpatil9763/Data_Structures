#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
	/* data */
	int Data;
	struct Node* Next;
};

void Insert_First(struct Node**, int);
void Display_Link_List(struct Node*);
void Insert_Last(struct Node**, int);

void Insert_First(struct Node** First, int Ele)
{
	struct Node* NewN = NULL;

	NewN = (struct Node*)malloc(sizeof(struct Node));

	if(NewN == NULL)
	{
		printf("\n Node Not Created. \n");
		getch();
		return;
	}

	NewN -> Data = Ele;
	NewN -> Next = NULL;

	if (*First == NULL)
	{
		*First = NewN;
	}
	else
	{
		NewN -> Next = *First;
		*First = NewN;
	}

	printf("\n\t %d Element Inserted Successfully...!!!! \n", NewN -> Data);
	return;

}

void Display_Link_List(struct Node* First)
{
	if (First == NULL)
	{
		/* code */
		printf("\n\t Link List is Empty. Cant Display Any Element. \n");
	}
	else
	{
		printf("\n\t\t Link List Elements : \n\n");
		for (; First != NULL; First =  First -> Next)
		{
			/* code */
			printf("\t\t |%d| \n", First ->Data);
		}

	}
}

void Insert_Last(struct Node **First,int Ele)
{
  	struct Node *NewN = NULL;
  	struct Node *Temp = *First;

 	 NewN = (struct Node*)malloc(sizeof(struct Node*));

  	if(NewN==NULL)
  	{
    		printf("\t Node Creation Denied.\n");
    		return;
 	 }

 	 NewN->Data = Ele;
 	 NewN->Next = NULL;

 	 if(*First==NULL)
 	 {
 		   *First = NewN;
 	 }
 	 else
 	 {
 		   for(;Temp->Next!=NULL;Temp=Temp->Next);

 		   Temp->Next = NewN;

 	 }

 	 printf("\n\t %d Element Inserted Successfully.\n",NewN->Data);

 	 return;

}

int main()
{
  	struct Node *Head = NULL;

  	Display_Link_List(Head);

  	printf("\n----------------------------------------\n");

  	Insert_Last(&Head,10);
  	Insert_First(&Head,11);
  	Insert_First(&Head,12);
  	Insert_First(&Head,13);
  	Display_Link_List(Head);

  	printf("\n----------------------------------------\n");

  	Insert_Last(&Head,41);
  	Display_Link_List(Head);

  	printf("\n----------------------------------------\n");

  	Insert_Last(&Head,50);
  	Insert_First(&Head,70);
  	Display_Link_List(Head);

  	printf("\n----------------------------------------\n");

  	return 0;
}
