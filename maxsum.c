 #include<stdio.h>
int main()
{
int i,j,n,t,cpy;int y=0;long long  maxcpy;
  printf("Enter number of test cases :");
scanf("%d",&t);
long long ans[t];
cpy=t;
 if(0<t&&t<11)
 {
  while(t>0)
  {
 printf("Enter length of sequences :");
   scanf("%d",&n);
   if(0<n&&n<701)
   {
   long long arr[n][n];
   long long sum=0;
  printf("enter elements of array :");
   long long  x;
   for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
        {

         scanf("%lld",&x);
         if(0<x&&x<1000000000)
         arr[i][j]=x;
        }
       printf("\n");
     }
long long max=0;

     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
        {
         printf("%lld ",arr[i][j]);
        }
      printf("\n");
     }
           printf("\n");
      printf("\n");
  long long cpyarr[n];

     for(i=0;i<n;i++)
     {
      for(j=0;j<n;j++)
        {
         cpyarr[j]=arr[i][j];
        }
        quickSort(cpyarr,0,n-1);
        for(j=0;j<n;j++)
        {
         arr[i][j]=cpyarr[j];
        }

     }
   max=arr[n-1][n-1];
   sum=max;
   maxcpy=max;
     for(i=n-2;i>=0;i--)
     {
       for(j=n-1;j>=0;j--)
        {
         if(arr[i][j]<max)
         {
          max=arr[i][j];
          break;
         }
        }

        if(max>=maxcpy)
         {
         sum=-1;
         break;
         }

        else
        {
        sum+=max;
        maxcpy=max;
        }

     }
     ans[y]=sum;
     y++;



     }
    t--;

  }
  for(i=0;i<cpy;i++)
  {
  printf("%lld",ans[i]);
  printf("\n");
  }
  }
return 0;
}


void swap(long long* a, long long* b)
{
    long long t = *a;
    *a = *b;
    *b = t;
}
long long partition (long long arr[], long long low, long long high)
{
    long long pivot = arr[high];    // pivot
    long long i = (low - 1);  // Index of smaller element
    int j;
    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(long long arr[], long long low, long long high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        long long pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
