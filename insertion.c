#include<stdio.h>
int main()
{
int a[20],i,n,x,temp,j;
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{


scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    temp=a[i];
    j=i-1;
    while (j>=0&&a[j]>temp)
    {
       a[j+1]=a[j];
       j--;
    }
    a[j+1]=temp;
    
}
printf("sorted array is:\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}
