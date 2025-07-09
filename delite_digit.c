#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void del_word(char *);
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("USAGE:./a.out file");
		return;
	}
	FILE *fp=fopen(argv[1],"r");
	int i,c1=0,c=0,line=0;char ch;
	while((ch=getc(fp))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			line++;
			if(c>c1)
				c1=c;
			c=0;
		}
	}
	rewind(fp);

	char **s=malloc(sizeof(char *)*line);
	for(i=0;i<line;i++)
		s[i]=malloc(c1+1);

	for(i=0;i<line;i++)
		fgets(s[i],c1+1,fp);
	rewind(fp);
	fclose(fp);
	fp=fopen(argv[1],"w");
	for(i=0;i<line;i++)
	{
		del_word(s[i]);
		fputs(s[i],fp);
	}

}
void del_word(char *p)
{
	int i,j,len,k,l,m,n;
	len=strlen(p);
	for(i=0,j=0;j<=len;j++)
	{
		if(p[j]==' ' || p[i]=='\n')
		{
			for(k=i,l=j-1;k<=l;k++)
			{
				if(p[k]>='0' &&p[k]<='9')
				{
					for(m=i,n=j+1;n<=len;m++,n++)
					{
						p[m]=p[n];
						j=i;
						i=j;
					}
					break;
				}
				else
					i=j+1;
			}
		}




	}             

}









                /*len=strlen(p);
		for(i=0;i<len;i++)
		{
			if(p[i]>='0' && p[i]<='9')
			{
				for(j=i;p[j];j++)
				{
					p[j]=p[j+1];
			
                         i--;	}
			}
			
		}



	}
*/






