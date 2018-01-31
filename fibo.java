import java.io.*;
import java.util.*;
import java.lang.*;
class fibo{
  public static void main(String args[])
  {
   Scanner sc=new Scanner(System.in);
   int t=sc.nextInt();
   int cpy=t;
    long ans[]=new long[t];
   int y=0;
    while(t>0)
    {
    System.out.println("Enter vales of a b and i :");
    long a=sc.nextInt();
    long b=sc.nextInt();
    long i=sc.nextInt();
    long f=0;
  if(a==1&&b==1&&i>2)
  {
   f=(long)Math.pow(2,i)-(long)(Math.pow(-1,i));
   f/=3;
  }
  else
  {
    for(int j=0;j<i-2;j++)
    {
    f=b+(2*a);
    a=b;
    b=f;
    }
  }
    ans[y]=f%1000000007;
    y++;

    t--;
    }
    for(int i=0;i<cpy;i++)
    {
      System.out.println(ans[i]);
    }
  }
}
