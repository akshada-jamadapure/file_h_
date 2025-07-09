#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void digit_check(char *);
void main(int argc,char**argv)
{
	FILE *fp=fopen(argv[1],"r");
	int c=0,line=0,c1=0,i;char ch;
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
	printf("c1=%d",c1);
	printf("line=%d",line);
	rewind(fp);
	char **s=malloc(sizeof(char*)*line);
	for(i=0;i<line;i++)
		s[i]=malloc(c1+1);

	for(i=0;i<line;i++)
		fgets(s[i],c1+1,fp);
	rewind(fp);
	fclose(fp);

	fp=fopen(argv[1],"w");
	//while((ch=fgtes(fp))!=EOF);
	for(i=0;i<line;i++)
	{
		digit_check(s[i]);
		fputs(s[i],fp);
	}

}
void digit_check(char *p)
{
         int i,j,m,n,k,l;char t;
	for(i=0;p[i]!=' ';i++);
	for(j=i+1;p[j]!=' ';j++);
	for(m=i+1,n=j-1;m<=n;m++)
	{
		if(p[m]>='0' && p[n]<='9')
                 {
                 for(k=i,l=j;k<=l;k++,l--)
			{
				t=p[k];
				p[k]=p[l];
				p[l]=t;
			}
			break;
		}
	}
}






