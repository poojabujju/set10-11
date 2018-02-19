#include<stdio.h>
#include<string.h>
void main()
{
int n,i,l,x;
char ch[10];
printf("Enter a Word : ");
scanf("%s",&ch);
printf("Enter a number : ");
scanf("%d",&n);
l=strlen(ch);
x=l-n;
for(i=x;i<l;i++)
{
printf("%c",ch[i]);
}
}
