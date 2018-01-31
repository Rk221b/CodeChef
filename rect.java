import java.io.*;
import java.util.*;
class rect
{
public static void main(String args[])
  {
    int t,a,b,c,d;
    int num[]=new int[4];
  //  System.out.println("Enter number of test cases : ");
    Scanner sc=new Scanner(System.in);
    t=sc.nextInt();
    int y=0;int g;
    String ans[]=new String[t];
      if(0<t&&t<1001)
      {
       for(int i=0;i<t;i++)
       {
      // System.out.println("Enter numbers : ");

         a=sc.nextInt();
         b=sc.nextInt();
         c=sc.nextInt();
         d=sc.nextInt();
            if(0<a&&a<10001)
            {
               num[0]=a;
            }
            if(0<b&&b<10001)
            {
               num[1]=b;
            }
            if(0<c&&c<10001)
            {
               num[2]=c;
            }
            if(0<d&&d<10001)
            {
               num[3]=d;
            }

           int co[]=new int[4];
           for(int j=0;j<4;j++)
           {
           co[j]=0;
           }

           for(int k=0;k<4;k++)
             {
              for(int j=0;j<4;j++)
               {
               if(num[k]==num[j])
               co[k]++;
               }
             }

          /*   for(int j=0;j<4;j++)
             {
             System.out.println(co[j]);
             }
         */
             for(int j=0;j<4;j++)
             {
               if(co[j]==2||co[j]==4)
               {
               ans[y]="YES";
               }
               else
               {
               ans[y]="NO";
               break;
               }
             }
             y++;

       }
     }
        for(int i=0;i<t;i++)
        {
        System.out.println(ans[i]);
        }
  }
}
