#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("USAGE:./a.out data1 line\n");
		return;
	}
	FILE *fp=fopen(argv[1],"r");
	if(fp==0){
		printf("File is not present\n");
	}
	int c=0,c1=0,l=0,i;
	char ch;
	while(ch=fgetc(fp)!=0)
	{
		c++;
		if(ch=='\n')
			l++;
		if(c>c1)
			c1=c;
		c=0;
	}
	rewind(fp);
	/////dynamic mr
	char **s;
	s=malloc(sizeof(char *)*l);
	for(i=0;i<l;i++)
	s[i]=malloc(c1+1);

	for(i=0;i<l;i++)
	{ 
		fgets(s[i],c1+1,fp);
	}
	rewind(fp);
	fclose(fp);
	fp=fopen(argv[1],"w");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	//for(i=0;i<l;i++)
	//{
		int num=atoi(argv[2]);
                  for(i=0;i<l;i++)
		  {
			  if(i!=(num-1))
			  {
				  fputs(s[i],fp);
			  }
		  }
		  fclose(fp);
}






