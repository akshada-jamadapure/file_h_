#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("USAGE:./a.out filename word");
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
			{
				c1=c;
				c=0;
			}
		}
	}
	rewind(fp);
	char **s=malloc(sizeof(char*)*line);
	for(i=0;i<=line;i++)
		s[i]=malloc(c1+1);
	for(i=0;i<=line;i++)
		fgets(s[i],c1+1,fp);
	rewind(fp);
	fclose(fp);

	while(fgets(s[i],c1+1,fp))
	{
		int l=strlen(s[i]);
		if(my_strstr(s[i],argv[2]))
			rev(s[i]);

		fseek(fp,-1,SEEK_CUR);
		fputs(s[i],fp);
	}
	fclose(fp);

}

void rev(char *p)
{
	int l=strlen(p);
	 int i=0;

	if(i>(l/2))
	{
		i=0;
		return;
	}
	else
	{
		char t=p[i];
		p[i]=p[l-1-i];
		p[l-1-i]=t;

		i++;
		rev(p);
	}

}
char *my_strstr(char *m,char *s)
{
	int i,j,k;
	for(i=0;m[i];i++)
	{
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
			{
				if(m[i+j]!=s[j])
					break;
			}
			if(s[j]=='\0')
				return s+i;
			else
				return 0;
		}
	}
}




















