#include<stdio.h>
void swap1(int *,int *);
main()
{
	int x=2,y=3;
	printf("Before swapping x=%d and y=%d\n",x,y);
	swap1(&x,&y);
	printf("After swapping in main,value of x=%d y=%d\n",x,y);
}

void swap1(int *x,int *y)
{
	int temp;
	int *ptemp=&temp;
	*ptemp=*x;
	*x=*y;
	*y=*ptemp;
	printf("Value of x=%d y=%d\n",*x,*y);
}

