#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void last_word_rev(char *);
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("USAGE:./a.out file");
		return;
	}
	FILE *fp=fopen(argv[1],"r");
	int i,c1=0,c=0,line=0;char ch;
	while((ch=fgetc(fp))!=EOF)
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
		last_word_rev(s[i]);
		fputs(s[i],fp);
	} 

}
void last_word_rev(char *p)
{
	int i,j,len;
	for(len=0;p[len];len++);
	for(i=0,j=0;j<=len;j++)
	{
		if(p[j]==' ' || p[j]=='\n')
		{
			if((p[i]>='a' && p[i]<='z'))
			{
				p[i]=p[i]-32;
				p[j+1]=p[j+1]-32;
			}
                 i=j+1;
            
            }
}
}


/*
{
	int i,j,len;
	for(len=0;p[len];len++);
	for(i=0;i<=len;i++)
	{
		if(p[i]==0)
		{
			if(p[i]>='a' && p[i]<='z')
				p[i]=p[i]-32;
		}
               printf("%d\n",i);
		else if(p[i]==' ')
		{ 
              // printf("%d\n",i);

			if(p[i+1]>='a' && p[i+1]>='z')
				p[i+1]=p[i+1]-32;
		}
	}
}*/

/*

			if((p[i]>='a' && p[i]<='z') || (p[j+1]>='a' && p[j+1]<='z'))
			{
				p[i]=p[i]-32;
				p[j+1]=p[j+1]-32;
			}
			
		}

	}
}

*/













/*	for(i=0;p[i]!=' ';i++);
	for(j=i+1;p[j]!=' ';j++)
	{
		if(p[j]>='a' && p[j]<='z')
		{
			p[j]=p[j]-32;
		}
		
	}

}*/
          










/*		int i,j,k,len;char t;
		for(len=0;p[len];len++);
		for(j=len-1;p[j]!=' ';j--);
		for(i=len-1;p[i]!=' ';i--)
		{
			if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u')
			{
				for(i=len-1,j=j+1;j<i;j++,i--)
				{ 
					t=p[i];
					p[i]=p[j];
					p[j]=t;
				}
			break;	
			}
                     
		}

*/










