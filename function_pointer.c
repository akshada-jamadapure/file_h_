#include<stdio.h>
#include<string.h>

void print(const char *);
int my_strlen(const char *);
const char * my_strchr(const char *,char);
void my_strcpy(const char *,char *);
void my_strupr(char *);
void my_strrev(char *);
void my_strrev1(char *,char *);
void my_strrev2(char *,int);
int my_strcmp(const char *,const char *);
void my_strcat(const char *,char *);

void main()
{
char s[50],*p,t[50];
int k;
int (*l)(const char *);
l=my_strlen;
void (*m)(char *,char *);
m=my_strrev1;
char *(*n)(const char*,const char *);
n=strstr;
int (*o)(const char *,...);
o=printf;
int (*u)(const char*,...);
u=scanf;

(*o)("Enter the string\n");
(*u)("%[^\n]",s);

(*o)("Enter the substring\n");
(*u)(" %[^\n]",t);
(*o)("Before s=%s\n",s);
k=(*l)(t);

while(p=(*n)(s,t))
(*m)(p,p+k-1);


(*o)("After s=%s\n",s);
}
void my_strcpy(const char *s,char *d)
{
while(*s)
{
*d=*s;
s++;
d++;
}
*d='\0';    // *d=*s;
}

int my_strcmp(const char *s1,const char *s2)
{
/* int i;
for(i=0;s1[i];i++)
{
if(s1[i]!=s2[i])
break;
}
return s1[i]-s2[i];  */

/////////////////////////////////////////////

while(*s1)
{
if(*s1!=*s2)
break;
s1++;
s2++;
}
return *s1-*s2;

}

void my_strrev1(char *p,char *q)
{
// p is holding starting address of string
// q is holding ending address of string

char t;

while(p<q)    // swaping of chars
{
t=*p;
*p=*q;
*q=t;
p++;
q--;
}

}

void my_strrev(char *p)
{

/* int len,i,j;
len=my_strlen(p);

char t;

for(i=0,j=len-1;i<j;i++,j--)
{
t=p[i];
p[i]=p[j];
p[j]=t;
}   */

///////////////////////////////////////////////////

char *q,t;

q=p;    //  p and q both are pointing on starting address

while(*q)
q++;    // at the end of loop q will point on '\0'

q--;    // here, q will point on end of string

while(p<q)    // swaping of chars
{
t=*p;
*p=*q;
*q=t;
p++;
q--;
}

}

void my_strupr(char *p)
{

int i;

for(i=0;p[i];i++)
{
if(p[i]>='a' && p[i]<='z')
p[i]=p[i]-32;
}

}


const char * my_strchr(const char *p,char ch)
{

int i;

for(i=0;p[i];i++)
{
	if(p[i]==ch)
		return p+i;        // return &p[i];
}
return 0;

}

int my_strlen(const char *p)
{

int i;

for(i=0;p[i];i++);

return i;
}

void print(const char *p)
{

printf("%s\n",p);

/* int i;
for(i=0;p[i];i++)
printf("%c",p[i]);
printf("\n");  */

/* while(*p)
printf("%c",*p++);
printf("\n");  */

}















