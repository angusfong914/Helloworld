#include <stdio.h>

void Print(char *filename);

int main(int argc,char **argv)
{
	printf("No. of file: %d\n",argc);
	for(int i=1;i<argc;i++)
	{
		printf("File %d : %s\n",i,argv[i]);
		Print(argv[i]);
	}
	return 0;
}

void Print(char *filename)
{
	FILE *fp;
	char s[1024];

	fp=fopen(filename,"r");
	if(fp == NULL)
	{
		printf("%s is not exists.\n",filename);
	}
	else
	{
		printf("%s is exists.\n",filename);
		while (fgets(s,1024,fp)!=NULL)
		{
			printf("%s",s);
		}
		fclose(fp);
	}
}
