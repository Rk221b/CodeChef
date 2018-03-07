#include<stdio.h>
int main()
{
int i,j,M,N,Rx,Ry,t,inc=0;
//printf("Enter number of test cases :");
scanf("%d",&t);
int cpy=t;
int ans[t];

 if(0<t&&t<11)
 {
  while(t>0)
  {
  int tm=0;
  int x,y;
  x=0;y=0;
   //printf("Enter value of M and N :");
   scanf("%d %d",&M,&N);

  // printf("Enter value of Rx and Ry :");
   scanf("%d %d",&Rx,&Ry);

  //printf("Enter total number of movement :");
   scanf("%d",&tm);
   char mov[tm];
   // printf("Enter movements :");

   if(0<M&&M<10001&&0<N&&N<10001&&0<Rx&&Rx<=M&&0<Ry&&Ry<=N)
   {
   for(i=0;i<tm;i++)
   {
   scanf(" %c",&mov[i]);
   }

   for(i=0;i<tm;i++)
   {
    if(mov[i]=='U')
     y=y+1;
     else if(mov[i]=='D')
     y=y-1;
     else if(mov[i]=='R')
      x=x+1;
      else
      x=x-1;
   }
   //printf("%d %d",x,y);
   if(x>M||y>N||x<0||y<0)
   {
   ans[inc]=-5;
   inc++;
   }
   if(x==Rx&&y==Ry)
   {
   ans[inc]=-4;
   inc++;
   }
   if(x<=M&&y<=N&&x>=0&&y>=0)
   {
   ans[inc]=-3;
   inc++;
   }

   }

  t--;
  }
   for(i=0;i<cpy;i++)
   {

   if(ans[i]==-5)
   {
     printf("Case %d",i+1);
     printf(": DANGER \n");
     }
     else if(ans[i]==-4)
     {
       printf("Case %d",i+1);
       printf(": REACHED \n");
       }
       else
       {
            printf("Case %d",i+1);
       printf(": SOMEWHERE \n");
       }
   }

   }

return 0;
}
