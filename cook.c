#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter number of Competitors ");
scanf("%d",&n);
   while(n>0)
   {
   int arr[5];
   printf("Enter points for each question :\n");
   for(i=0;i<5;i++)
   {
   scanf("%d",&arr[i]);
   }
   int count=0;
   for(i=0;i<5;i++)
   {
   if(arr[i]==1)
   count++;
   }

   if(count==0)
   printf("Beginner");
   else if(count==1)
   printf("Junior Developer");
   else if(count==2)
   printf("Middle Developer");
   else if(count==3)
   printf("Senior Developer");
   else if(count==4)
   printf("Hacker");
   else
   printf("Jeff Dean");


    n--;
   }



return 0;
}
