#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void last_word_rev(char *);
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("USAGE:./a.out filename");
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
last_word_rev(s[i]);
fputs(s[i],fp);

}
}
void last_word_rev(char *p)
		{
		int i,j,len,k,l,m,n;char t;
                len=strlen(p);
                for(i=len-2;p[i]!=' ';i--);
                for(k=i+1,l=len-2;k<l;k++)
                {
                 if(p[k]>='0' && p[k]<='9')
                  {
                   for(m=i+1,n=len-2;m<n;m++,n--)
                   {
                     t=p[m];
                    p[m]=p[n];
                    p[n]=t;
                    }
               break;
                 }
}
}

