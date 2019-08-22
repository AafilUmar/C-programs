/*Program to compare two strings if equal return 0,greater using ascii code return 1,or return -1*/
#include<stdio.h>
int my_strcmp(const char *,const char *);
void main()
{
int c;
char s[20],s1[20];
printf("Enter the first string");
scanf("%s",s);
printf("enter the second string");
scanf("%s",s1);
c=my_strcmp(s,s1);
if(c==0)
printf("the strings are equal");
else if(c==1)
printf("String 1 is greater");
else
printf("String 2 is greater");
}
/*User defined fuction to compare two srings*/
int my_strcmp(const char *s,const char *s1)
{
int i;
for(i=0;s[i];i++)
{
if(s[i]!=s1[i])
break;
}
if(s[i]==s1[i])
return 0;
else if(s[i]>s1[i])
return 1;
else
return -1;
}

