#include<stdio.h>
int main()
{
int i,j,t,n;
//printf("Enter number of test cases :");
scanf("%d",&t);

   while(t>0)
   {
   //printf("Enter value of n :");
   scanf("%d",&n);
   int arr[n];int count=0;int sum=0;

     for(i=0;i<n;i++)
     {
     scanf("%d",&arr[i]);
     }
   quickSort(arr,0,n-1);
int max=arr[n-1];
    for(i=0;i<n;i++)
     {
       if(arr[i]==arr[i+1])
        {
            sum=arr[i]+max;
            arr[i]=sum;
              max=sum;
               count++;
            }
        }
printf("%d \n",count);

   t--;
   }

return 0;
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

