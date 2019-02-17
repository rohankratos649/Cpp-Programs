#include<stdio.h>
int main()
int n,k,i,t;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&t);
if(t%k==0)
line++;
}
printf("%d",line++);

