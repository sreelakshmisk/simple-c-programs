#include<stdio.h>
void main()
{ 
int n,i,s=1;
  
printf("Enter limit:\n");
scanf("%d",&n);
  
for(i=1;i<=n;i++)
  {
  s=s*i;
  }
  
printf("answer=%d",s);
}
