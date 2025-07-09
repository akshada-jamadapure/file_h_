#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void digit_check(char*);
void main(int argc,char **argv)
{
//	if(argc!=2)
//	{
//		printf("USAGE:./a.out data9");
//		return;
//	}
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
        
        printf("line=%d",line);
        printf("c1=%d",c1);
		rewind(fp);
		//char s[20]
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
			digit_check(s[i]);
			fputs(s[i],fp);
		}
	}
	void digit_check(char *p)
	{
		int i,j,k,l,m,n;char t;
		for(i=0;p[i]!=' ';i++);
		for(j=i+1;p[j]!=' ';j++);
		for(k=i+1,l=j-1;k<=l;k++)
		{
			if(p[k]>='0' && p[k]<='9')
			{
				for(m=i,n=j;m<=n;m++,n--)
				{
					t=p[m];
					p[m]=p[n];
					p[n]=t;
				}
				break;
			}
		}
	}

