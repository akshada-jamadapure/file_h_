#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("USAGE: ./a.out filename word \n");
		return;
	}
	FILE *fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	char ch[55];
	int c=0,l=0,c1=0,t,i,s;
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			l++;
			if(c>c1)
			{
				c1=c;
				c=0;
			}
		}
	}
	rewind(fp);
	while(fgets(s,55,fp)
			{
			int l=strlen(s);
			if(my_strstr(s,argv[2]))
			rev(s);

			fseek(fp,-1,SEEK_CUR);
			fputs(s,fp);

			
			}
			fclose(fp);
			}
			}
			

			/*	char **s;
				s=malloc(sizeof(char*)*l);
				for(i=0;i<l;i++)
				s[i]=malloc(c1+1);
				}
				for(i=0;i<l;i++)
				{
		fgets(s[i],c1+1,fp);
	}

	fclose(fp);
	/////////////
	fp=fopen(argv[1],"w");


	for(i=0;i<l;i++)
	{
		if(strstr(s[i],"india")!=NULL){
			fputs(s[i],fp);
		}
	}
	fclose(fp);
}*/
