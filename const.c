#include <stdio.h>

const int func(int a)
{
	return a+a;
}

int main(void)
{
	int a=9;
	const int *b=&a;
	int c=20;

	printf("a = %d\n",a);
	printf("b = %d\n",*b);
	b=&c;
	//*b=11; 
	a=func(a)+3;
	//a=a*2;
	c=11;
	printf("new b = %d\n",*b);
	printf("a = %d\n",a);
  return 0;
}
