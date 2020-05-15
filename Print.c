#include <stdio.h>

typedef enum {smBegin=0,smEnd} SeparateMode;

void Print(char *filename);
void Separator(SeparateMode mode);

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
	char s[128];

	fp=fopen(filename,"r");
	if(fp == NULL)
	{
		printf("%s is not exists.\n",filename);
	}
	else
	{
		printf("%s is exists.\n",filename);
		Separator(smBegin);
		while (fgets(s,128,fp)!=NULL)
		{
			printf("%s",s);
		}
		Separator(smEnd);
		fclose(fp);
	}
}
void Separator(SeparateMode mode)
{
	switch(mode)
	{
		case smBegin: printf("****************** Begin *********************\n");break;
		case smEnd:   printf("==================  End  =====================\n");break;
	}
}
