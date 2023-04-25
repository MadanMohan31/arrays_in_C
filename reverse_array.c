#include <stdio.h>

int main()
{
    int size, j;
    long long *num;
    scanf("%d",&size);
    num = (long long*)malloc(size*sizeof(long long));
    for(j=0;j<size;j++)
    {
        scanf("%lld",num+j);
    }

    for (j = size-1; j >= 0; j--) {
        printf("%lld ",*(num+j));
    }
    return 0;
}
