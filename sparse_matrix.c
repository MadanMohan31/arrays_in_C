//Given a matrix of size N x M, print whether it is a sparse matrix or not.
//Note: If a matrix contain 0 in more than half of its cells, then it is called a sparse matrix.

#include <stdio.h>

int main()
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int count = 0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j] == 0)
            {
                count += 1;
            }
        }
    }
    int total = row*col;
    if(count > total/2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
