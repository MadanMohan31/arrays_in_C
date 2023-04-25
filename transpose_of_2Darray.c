#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    write a c code to write the transpose of the

    sample input:
    1 1
    2 2
    sample output:
    1 2
    1 2

    */

    int r1,c1,i,j;

    scanf("%d %d",&r1,&c1);

    int a[r1][c1];
    int b[r1][c1];

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
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}





#include <stdio.h>
int main)
{
int n,m;
int arr [100][100];
scanf (*%d %d" ‚&n, &m);
for (int i-0;i<n;i++)
{
for (int j-0;j<m;j++)
{
scanf (*%d", &arr[i][j]) ;
}
}
for (int i-0;i<m;i++)
{
for(int j-0;j<n;j++)
printf(*% ",arr[j1[il);
}
printf("\n");
}
