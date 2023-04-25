#include <stdio.h>
#include <stdlib.h>

int main()
{

    int r1,c1,r2,c2,i,j,k;
    scanf("%d %d",&r1,&c1);
    scanf("%d %d",&r2,&c2);
    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c1];

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j] = 0;
            for(k=0;k<c1;k++)
            {
                c[i][j] = c[i][j]+a[i][k]*b[k][j];
            }
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
