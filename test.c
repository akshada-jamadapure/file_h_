#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("USAGE:./a.out file_name\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	int i,c=0,t,j;
	char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch==' ')
		{
			if((c+1)>='0' || (c+1)<='9')
			{
                             for(j=0;j;j++)
			     {
				     t=argv[1][j];
				     argv[1][j]=argv[1][i];
				     argv[1][i]=t;
			     }
			}
		}
	}
}
