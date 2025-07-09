#include <stdio.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("USAGE:wrong input");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r+");
	if(fp==0)
		printf("file is not present");
	return;
}
while(ch=fgetc(fp)!=-1)
	if(ch==argv[2][0])
{
	fseek(fp-1,SEEK_cur);
	fput(argv[3][0],fp);
}
}
}


