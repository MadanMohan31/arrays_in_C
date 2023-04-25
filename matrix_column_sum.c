#include <stdio.h>


int main()
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    long long arr[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%lld",&arr[i][j]);
        }
    }

    long long sum = 0;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            sum += arr[j][i];
        }
        printf("%lld\n",sum);
        sum = 0;
    }

    return 0;
}

