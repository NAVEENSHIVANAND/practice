#include<stdio.h>

int mergesort(int a[] , int l , int h )
{
    int mid;
     if(l<h)
        {
            mid = (l + h )/ 2;
            mergesort(a , l , mid );
            mergesort( a , mid+1 , h)
            merge(a, low , mid, high);

            return 0;
        }
}


int merge(int a[], int low , int mid , int high)
{
    int i , j , k , b[20];
    i=low;
    j=mid + 1;
    k=low;
    while( i<= mid && j <= high)
    {
      if(a[i] <  a[j])
      {
          b[k]=a[i];
          i++; k++;
      }
      else
      {
          b[k]=a[j];
          j++;k++;
      }
    }
      if(i>mid)
      {while(j<=high){
          b[k]=a[i];
          i++; k++;
      }
      else{
      while(i<=mid)
      {
          b[k]=a[j];
          j++; k++;
      }
      }}
      for(k=low; k< high; k++){
        a[k]=b[k];
        printf("\n");
      }
      return 0;
    }


void printarray(int a[],int n)
{
    for(int i=0; i< n ; i++)
    printf("%d\t",a[i]);
}

int main()
{
    int n ,i, a[20];
    printf("Enter the no of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements  : ");
    for (int i = 0; i < n ; i++)
        scanf("%d",&a[i]);
    mergesort( a , 0 , n-1);
    printarray(a,n);

return 0;
}