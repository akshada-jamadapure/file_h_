#include<stdio.h>
void main()
{
	char s[200];int i,j,c,c1=0,m,y,x,t,p,k;
	printf("Enter string\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		for(j=i,c=0;s[j]!=' ' && s[j];j++,c++);
		{

			if(c>c1)
			{
				c1=c;
				x=i;
				y=j;}
			for(p=x,k=y;p<k;p++,k--)
			{
				t=s[p];
				s[p]=s[k];
				s[k]=t;
			}

		}

		i=j;
	}
	//  for(x,y;x<y;x++)
	printf("%s",s);



}                  

