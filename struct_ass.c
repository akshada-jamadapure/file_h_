#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st{
		int rn;
		char name[20];
		float marks;
	};
void main()
{
	int i;
	struct st *p[5];
	for(i=0;i<5;i++)
        p[i]=malloc(sizeof(struct st));
        
	for(i=0;i<5;i++)
	{
	printf("Enter rollno,name,marks\n");
scanf("%d%s%f",&p[i]->rn,p[i]->name,&p[i]->marks);	

	}
}
	
