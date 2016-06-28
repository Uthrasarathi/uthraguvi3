#include<stdio.h>
void main()
{
int n,i;
char ch;
printf("days:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n<=6)
{
printf("WORKING DAY TRUE");
}
else
if(n==7)
{
printf("HOLIDAY FALSE");
}
}
getch()
;
}
