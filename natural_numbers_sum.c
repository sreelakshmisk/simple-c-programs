#include<stdio.h>
void main()
{ 
int n,i,s=0;
printf("Enter limit:\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
  {
  s=s+i;
  }
printf("sum=%d",s);
}
