#include<stdio.h>
int main()
{
int i,j,n,t;
printf("Enter number of test cases :");
scanf("%d",&t);

  while(t>0)
  {
   printf("Enter number of chefs finger :");
    scanf("%d",&n);
    int finger[n];
    int len[n];
    printf("Enter length of chefs finger :");

     for(i=0;i<n;i++)
     {
     scanf("%d",&finger[i]);
     }

     printf("Enter length of glove :");

     for(i=0;i<n;i++)
     {
     scanf("%d",&len[i]);
     }
    int f1=0;int f2=0;int x=n-1;

    for(i=0;i<n;i++)
    {
       if(finger[i]>len[i])
         {
         f1=1;
         break;
         }
    }


      for(i=0;i<n;i++)
    {
       if(finger[i]>len[x])
         {
         f2=1;
         break;
         }
         x--;
    }


if(f1==0&&f2==1)
{
printf("front");
}
else if(f2==0&&f1==1)
printf("back");
else if(f1==0&&f2==0)
printf("both");
else
printf("none");

  t--;
  }

return 0;
}
