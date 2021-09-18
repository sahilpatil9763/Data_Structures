#include<stdio.h>
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
	(*a).total_size = tSize;
	(*a).used_size  = uSize;
	int *ptr = (int*)malloc();
	
}

int main()
{
	struct myArr marks;
	createArr(&marks, 100, 20);

	getch();
	return 0;
}