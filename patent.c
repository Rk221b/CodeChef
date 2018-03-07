#include<stdio.h>
int main()
{
  int i,j,n,m,x,k,t,cpy;
  printf("Enter number of test cases :");
  scanf("%d",&t);
  int ans[t];int y=0;
  cpy=t;
    while(t>0)
    {
    printf("Enter value of Patents , Months , Max no of workers , Number of workers :");
    scanf("%d %d %d %d",&n,&m,&x,&k);
    char s[k];
    printf("Enter Workers working pattern :");
    for(i=0;i<k;i++)
    {
    scanf(" %c",&s[i]);
    }
    for(i=1;i<=m;i++)
    {
    int count=0;
       if(i%2==0)
       {
         for(j=0;j<k;j++)
         {
           if(s[j]=='E'&&count<x&&n>0)
           {
           n--;
           s[j]='0';
           count++;
           }
         }
         }

         if(i%2!=0)
       {
         for(j=0;j<k;j++)
         {
           if(s[j]=='O'&&count<x&&n>0)
           {
           n--;
           s[j]='0';
           count++;
           }
         }

       }
    }

    if(n==0)
    {
    ans[y]=1;
    y++;
    }
    else
    {
    ans[y]=0;
    y++;
    }



      t--;
    }
    for(i=0;i<cpy;i++)
    {
    if(ans[i]==1)
    printf("yes \n");
    else
    printf("no \n");
    }

return 0;
}
