#include <stdio.h>
#include <stdlib.h>

int main()
{

    int r1,c1,i,j;
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
    int b[r1][c1];
    int c[r1][c1];

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }




    return 0;
}
