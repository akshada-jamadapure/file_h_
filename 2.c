#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("USAGE:./my-cp scr file destfile\n");
		return;
	}
	FILE *sf,*df;

	sf=fopen(argv[1],"r");
	if(sf==0)
	{
		printf("src file is not present\n");
		return;
	}
	df=fopen(argv[2],"w");
	char ch;
	while((ch=fgetc(sf))!=EOF)
		fput(ch,df);
}

	
