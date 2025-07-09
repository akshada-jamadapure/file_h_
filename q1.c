#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("USAGE:./a.out data");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File is not p");
		return;
	}
	char ch;int c=0,c1=0,c2=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
		{
			c++;
		}
	
	//printf("count=%d",c);
	
//	while((ch=fgetc(fp))!=EOF)
	
	if(ch==' ' || ch=='\n')
	{
		c1++;
        }
	if(ch>='0' && ch<='9')
	{
	c2++;	
        
         }
      }
	printf("count=%d\n",c);
	printf("count word=%d\n",c1);
	printf("digit count=%d\n",c2);

}


	

