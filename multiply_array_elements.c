#include <stdio.h>

int main()
{
    int test,l;
    scanf("%d",&test);
    for(l=1;l<=test;l++)
    {
        int row,i;
        scanf("%d",&row);
        long long a[row];
        for(i=0;i<row;i++)
        {
            scanf("%lld",&a[i]);
        }
        long long count = 1;
        for(i=0;i<row;i++)
        {
            count *= a[i];
        }
        printf("%lld\n",count);
    }

    return 0;
}
