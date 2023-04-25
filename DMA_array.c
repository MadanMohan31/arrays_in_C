// this code is to know the basic structure of using DMA for arrays in C.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test,j;
    scanf("%d",&test);
    for(j=1;j<=test;j++)
    {
        int n,i;
        scanf("%d",&n);
        int *a;
        a = (int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d",a+i);
        }
        int freq[n];
        for(i=0;i<n;i++)
        {
            freq[i]=0;
        }
        for(i=0;i<n;i++)
        {
            freq[a[i]]++;
        }

        int c=0;
        for(i=0;i<n && c!=2;i++)
        {
            if(freq[i]==2)
            {
                printf("%d ",i);
                c++;
            }
        }
        printf("\n");
    }
    return 0;
}
