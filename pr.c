#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun_rev(char*);
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("USAGE:file is not present");
		return;
	}
	FILE *fp=fopen(argv[1],"r");
	int i,c=0,c1=0,line=0;char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch=='\n')
		{line++;
			if(c>c1)
				c1=c;
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
		fun_rev(s[i]);
		fputs(s[i],fp);
	}
}
void fun_rev(char *p)
{
	int i,j,k,len,m,n;char t;
	len=strlen(p);
	for(j=0,i=len-2;j<i;j++,i--)
	{
				t=p[j];
				p[j]=p[i];
				p[i]=t;
	}
}























