#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;
    scanf("%d",&size);
    int *num;
    num = (int*)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
    {
        scanf("%d",num+i);
    }
    int last = *num;
    for(i=1;i<size;i++)
    {
        if(last < *(num+i))
        {
            last = *(num+i);
        }
    }
    printf("%d\n",last);


    return 0;
}
