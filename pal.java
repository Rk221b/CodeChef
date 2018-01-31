import java.io.*;
import java.util.*;
class pal
{
 public static void main(String args[])
  {
   Scanner sc=new Scanner(System.in);
   int y=0;
   System.out.println("Enter nymber of test cases :");
   int t,cpy;
   t=sc.nextInt();
   cpy=t;
   int ans[]=new int[t];
     while(t>0)
     {
       String s1="",s2="",s3="",s4="";
       System.out.println("Enter string 1 :");
       s1=sc.next();
       System.out.println("Enter string 2 :");
       s2=sc.next();
       s3=s1+s2;
       s4=s2+s1;
       String rev1="",rev2="";

       for(int i=s3.length()-1;i>=0;i--)
       {
         rev1+=s3.charAt(i);
       }

       for(int i=s4.length()-1;i>=0;i--)
       {
         rev2+=s4.charAt(i);
       }
       System.out.println(s3);
       System.out.println(s4);
       System.out.println(rev1);
       System.out.println(rev2);
    //  int a=s3.length()-1;
    //  System.out.println(a);
    //  int b=s4.length()-1;
       int flag1=0,flag2=0;
        for(int i=0;i<s3.length();i++)
         {
            if(s3.charAt(i)!=rev1.charAt(i))
            {
             flag1=1;
             break;
            }
      }


         if(flag1==1)
         {

         for(int i=0;i<s4.length();i++)
         {
            if(s4.charAt(i)!=rev2.charAt(i))
            {
             flag2=1;
             break;
            }

         }
       }

         if(flag1==1&&flag2==1)
         {
         ans[y]=0;
         y++;
         }
         else
         {
         ans[y]=1;
         y++;
         }

     t--;
   }
   for(int i=0;i<cpy;i++)
   {
   System.out.println(ans[i]);
   }

  }
}
