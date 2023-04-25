#include <stdio.h>
#include <stdlib.h>

int element(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
                break;
        }
        if(j==n)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    element(a,n);
}
