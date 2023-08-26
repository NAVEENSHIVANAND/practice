#include<stdio.h>
void printarray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n");
}

void  quicksort(int a[], int low, int high)
{

    int partitionindex;
    if(low<high)
    {
        partitionindex = partition( a,  low,  high);
        quicksort( a,  low,  partitionindex -1);
        quicksort(a,  partitionindex+1,  high);

    }

}


int partition(int a[], int low, int high)
{
    int pivot= a[low];
    int i=low+1;
    int j=high;
    int temp;
    do
    {
        while(a[i] <= pivot)
        {
            i++;
        }
        while(a[j] > pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }while(i<j);


        temp = a[low];
        a[low] = a[j];
        a[j] = temp;

    return j;
}

int  main()
{
 int n ,i, a[20];
    printf("Enter the no of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements  : ");
    for (int i = 0; i < n ; i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printarray(a, n);
    return 0;
}