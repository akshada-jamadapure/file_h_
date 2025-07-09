#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fun(char *);
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("USAGE:./a.out file");
		return;
	}
	FILE *fp=fopen(argv[1],"r");
	int i,c=0,c1=0,line=0;char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			line++;
			if(c>c1)
				c1=0;
			c=0;
		}
	}
	rewind(fp);
	char **s=malloc(sizeof(char*)*line);
	for(i=0;i<line;i++)
		s[i]=malloc(c1+1);

	for(i=0;i<line;i++)
		fgets(s[i],c1+1,fp);
	rewind(fp);
	fclose(fp);

	fp=fopen(argv[1],"w");
	for(i=0;i<line;i++)
	{
		fun(s[i]);
		fputs(s[i],fp);
	}
}
void fun(char *p)
{
	int len,i,j,k,l;char t;
	len=strlen(p);
	for(j=0;j<len;j++)
	{
		if(p[j]>='0' && p[j]<='9')
		{
			for(k=j;p[k];k++)
			{
				p[k]=p[k+1];
			}
			j--;
		}
	}
}

















