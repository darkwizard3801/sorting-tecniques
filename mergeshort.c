#include <stdio.h>
#include <stdlib.h>
void Merge(int a[100], int lb, int mid, int ub);
void Merge_Sort(int a[100], int lb, int ub)
{
    if (lb < ub)
    {
 
        int mid = (lb + ub)/2;
 
        
        Merge_Sort(a, lb, mid);
        Merge_Sort(a, mid + 1, ub);
 
        Merge(a, lb, mid, ub);
    }
}
void Merge(int a[100], int lb, int mid, int ub)
{
    int i, j, k, b[100];
    i=lb;
    j=mid+1;
    k=lb;
    while (i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
             b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=ub)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }
}
int main()
{
    int n,i;
    printf("Enter the n: ");
    scanf("%d", &n);
 
    int a[n];
    printf("Enter the elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    Merge_Sort(a, 0, n - 1);
 
    printf("The sorted array is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}