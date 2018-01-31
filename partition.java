import java.io.*;
import java.util.*;
class partition
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int i,j,t,cpy;int y=0;
System.out.println("Enter number of cases :");
t=sc.nextInt();
cpy=t;
String ans[]=new String[t];
 if(0<t&&t<10001)
 {
  while(t>0)
  {
  int x,n;
  System.out.println("Enter value of x and n :");
  x=sc.nextInt();
  n=sc.nextInt();
  if(1<n&&n<1000001&&0<x&&x<=n)
  {
  int arr[]=new int[n];int tsum=0;int cpyarr[]=new int[n];
  for(i=0;i<n;i++)
  {
  arr[i]=i+1;
  cpyarr[i]=arr[i];
  if(arr[i]!=x)
  tsum+=arr[i];
  }
   if(tsum%2==0&&n!=2&&n!=3)
   {
  tsum/=2;
  int c1,c2;
  int d1[]=new int[n],d2[]=new int[n];int h=0; int u=0;
  int sum2=0;
  for(i=n-1;i>=0;i--)
  {
   if((sum2+arr[i])<=tsum)
   {
   if(arr[i]!=x)
   {
   sum2+=arr[i];
   }
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
    {
    d1[u]=arr[i];
    u++;
  }
  }
  System.out.println();

  for(i=0;i<u;i++)
  {
    System.out.print(d1[i]);
  }
  System.out.println();
  for(i=h-1;i>=0;i--)
  {
    System.out.print(d2[i]);
  }
  System.out.println();
  String s="";int flag=0;
  for(i=0;i<n;i++)
  {
   for(j=0;j<u;j++)
    {
      if(cpyarr[i]==d1[j]&&cpyarr[i]!=x)
      {
      s+="0";
      break;
      }
      if(cpyarr[i]==x&&flag==0)
      {
      s+="2";
      flag=1;
      break;
      }
    }


    for(j=h-1;j>=0;j--)
     {
       if(cpyarr[i]==d2[j]&&cpyarr[i]!=x)
       {
       s+="1";
       break;
       }
       if(cpyarr[i]==x&&flag==0)
       {
       s+="2";
       flag=1;
       break;
       }
     }

   }
  ans[y]=s;
  y++;
}
else
{
ans[y]="impossible";
y++;
}
}
  t--;
}
}
  for(int g=0;g<cpy;g++)
  System.out.println(ans[g]);
}
}
