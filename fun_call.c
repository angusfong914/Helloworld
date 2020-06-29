#include <stdio.h>

void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int reverse(int (*a)[10])
{
	for(int i=0;i<5;i++)
	{
		swap(&(*a)[i],&(*a)[9-i]);
	}
	return 0;
}
int reverse2(int *a)
{
	for(int i=0;i<5;i++)
		swap(&a[i],&a[9-i]);
	return 0;
}

void print(int (*a)[10])
{
	for(int i=0;i<10;i++)
		printf("%d ",(*a)[i]);
	printf("\n");
}
void print2(int *a)
{
	for(int i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main(void)
{
	int a[10];
	int b[20];

	for(int i=0;i<20;i++)
	{
		if(i<10)a[i]=i;
		b[i]=-i;
	}

	printf("the new way of calling functions: \n");

	print(&a);
	reverse(&a);
	print(&a);

	print(&b[10]);  //warning of incompatible data type
	reverse(&b[10]);   //warning of incompatible data type
	print(&b[10]);  //warning of incompatible data type

  printf("The old way of calling functions:\n");

	print2(a);
	reverse2(a);
	print2(a);

	print2(&b[0]);
	reverse2(&b[0]);
	print2(&b[0]);

	return 0;
}
