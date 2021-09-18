#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct myArr
{
	/* data */
	int total_size;
	int used_size;
	int *ptr;
};

void createArr(struct myArr* a, int tSize, int uSize)
{
	// (*a).total_size = tSize;
	// (*a).used_size  = uSize;
	// (*a).ptr = (int*)malloc(tSize*sizeof(int));
	//    OR

	a -> total_size = tSize;
	a -> used_size  = uSize;
	a -> ptr = (int*)malloc(tSize*sizeof(int));
	
}

void show(struct myArr *a)
{
	for (int i = 0; i < a->used_size; i++)
	{
		/* code */
		printf("%d\n", (a->ptr)[i]);
	}
	
}

void setVal(struct myArr *a)
{
	int n;

	for (int i = 0; i < a->used_size; i++)
	{
		/* code */
		prinf("\n Enter Element %d", i);
		scanf("%d\n", &n);
		(a->ptr)[i] = n;
	}
}

int main()
{
	struct myArr marks;
	createArr(&marks, 10, 2);
	printf("We are runnig setVal now\n");
	setVal(&marks);
	printf("We are runnig show now\n");
	show(&marks);
	getch();
	return 0;
}