#include<stdio.h>
int digit_check(const char *);
void main()
{
	FILE *FP=fopen("data","r");
	FILE *FP1=fopen("data","w");

	char s[20];
	while(fscanf(FP,"%s",s)!=0)
	{
		if(digit_check(s));
		fprintf(FP1,"%s",s);

	}
	int digit_check(const char *p)
	{
         int i;
		for(i=0;p[i];i++)
		{
			if(p[i]>='0' && p[i]<='9')
			{
				return 1;
			}
			return 0;
		}


	}



}
