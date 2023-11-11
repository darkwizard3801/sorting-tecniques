#include <stdio.h>
#include <stdlib.h>
 

void Merge(int a[], int lb, int mid, int ub)
{
    int i, j, k;
    int n1 = mid - lb + 1;
    int n2 = ub - mid;

    int lb[n1], ub[n2];
 
    for (i = 0; i < n1; i++)
        lb[i] = a[lb + i];
 
    for (j = 0; j < n2; j++)
        ub[j] = a[mid + 1 + j];
 
   
    i = 0;	
    j = 0;	
    k = lb; 
    while (i < n1 && j < n2)
    {
        if (lb[i] <= ub[j])
        {
            a[k] = lb[i];
            i++;
        }
        else
        {
            a[k] = ub[j];
            j++;
        }
        k++;
    }
 
    
    while (i < n1)
    {
        a[k] = lb[i];
        i++;
        k++;
    }
 
   
    while (j < n2)
    {
        a[k] = ub[j];
        j++;
        k++;
    }
}
 

void Merge_Sort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
 
        int mid = lb + (ub - lb) / 2;
 
        
        Merge_Sort(a, lb, mid);
        Merge_Sort(a, mid + 1, ub);
 
        Merge(a, lb, mid, ub);
    }
}
 

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
 
    int a[n];
    printf("Enter the elements of aay: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    Merge_Sort(a, 0, n - 1);
 
    printf("The sorted aay is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}





