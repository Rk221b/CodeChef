#include<stdio.h>
int main()
{
int i,j,n,t;
//printf("Enter number of test cases :");
scanf("%d",&t);

   while(t>0)
   {
 // printf("Enter number of recipies :");
   scanf("%d",&n);
   int arr[n][3];
 //  printf("Enter price , quantity and discount of each recipe :\n");

     for(i=0;i<n;i++)
       {
         for(j=0;j<3;j++)
         {
         scanf("%d",&arr[i][j]);
         }
       }
      double np,loss,dp,l;
      l=0;np=0;dp=0;loss=0;

        for(i=0;i<n;i++)
       {
          np=arr[i][0]+((double)(arr[i][0]*arr[i][2])/(double)100);
          dp=np-((np*arr[i][2])/100);

           l=arr[i][0]-dp;
           l*=arr[i][1];
           loss+=l;

       }
       printf("%f",loss);
       printf("\n");



   t--;
   }



return 0;
}
