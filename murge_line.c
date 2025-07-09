#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char **argv)
{
	FILE *fp1=fopen(argv[1],"r");
	FILE *fp2=fopen(argv[2],"r");
	FILE *fp3=fopen(argv[3],"w");
	
	if(fp1==0 || fp2==0 || fp3==0)
	{
		printf("file is not present\n");
		return;
	}
	char line1[100],line2[100];
	char *w1=0,*w2=0;
	w1=fgets(line1,100,fp1);
	w2=fgets(line2,100,fp2);
	while(w1!=0 || w2!=0)
	{
		if(w1!=0)
			fputs(line1,fp3);
		if(w2!=0)
		        fputs(line2,fp3);
		w1=fgets(line1,500,fp1);
		w2=fgets(line2,500,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}




