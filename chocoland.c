#include<stdio.h>
void main()
{
int i,j,t,n,k,s,cpy;
printf("Enter Number of cases :");
scanf("%d",&t);
int ans[t];
cpy=t;
int y=0;
  while(t>0)
  {
   printf("Enter Number of chocolate in box :");
   scanf("%d",&n);
   printf("Enter Number of chocolate need to survive:");
   scanf("%d",&k);
   printf("Enter Number of days to survive :");
   scanf("%d",&s);
   int ncpy;
   ncpy=n;

  int a=1,flag=0;
  for(i=1;i<=s;i++)
  {

    if(n>=k&&n>=0)
    {
      n-=k;
    }
    if(n<k&&i%7!=0)
    {
    n+=ncpy;
    a++;
    }
    if(n<k&&i%7==0)
    {
    flag=1;
    break;
    }
  }
  if(flag==1)
  {
  ans[y]=-1;
  y++;
  }
  else
  {
  ans[y]=a;
  y++;
  }


  t--;
  }
  for(j=0;j<cpy;j++)
  {
  printf("%d \n",ans[j]);
  }

}
