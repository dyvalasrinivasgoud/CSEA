#include<stdio.h>
int main()
{
int n,i,temp,num;
printf("enter the range");
scanf("%d",&n);
printf("the prime no's range from 1to %d \n",n);
for(num=1;num<=n;num++)
{
temp=0;
for(i=2;i<=num;i++)
{
if(num%i==0)
temp++;
break;
}
if(temp==0&&num!=1)
printf("%d\n",num);
}
}
