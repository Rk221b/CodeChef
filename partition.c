#include<stdio.h>
void main()
{
int i,j,t;
printf("Enter number of cases :");
scanf("%d",&t);

  while(t>0)
  {
  int x,n;

  printf("Enter value of x and n :");
  scanf("%d %d",&x,&n);
  int arr[n];int tsum=0;
  char ans[n];
  for(i=0;i<n;i++)
  {
  if((i+1)=x)
  arr[i]=0;
  else
  arr[i]=i+1;
  tsum+=arr[i];
  }
   if(tsum%2==0)
   {
  tsum/=2;
  int c1,c2;
  int d1[n],d2[n];int h=0; int u=0;
  int sum1=0;int sum2=0;
  for(i=n-1,i>=0;i--)
  {
   if(sum2<tsum)
   {
   sum2+=arr[i];
   d2[h]=arr[i];
   h++;
   arr[i]=0;
   }
   if(sum2==tsum)
   break;
  }
  for(i=0;i<n;i++)
  {
    if(arr[i]!=0)
    d2[i]=arr[i];
  }
}




  t--;
  }
}
