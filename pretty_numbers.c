/* If any number in the given range ends with the number 2, 3, or 9, then that number will be considered as a pretty number in this scenarion.
   So count the pretty number present in the range and print the count of those numbers.
*/


#include <stdio.h>

int main()
{
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        long long start, end;
        int j,count=0;
        scanf("%lld %lld",&start,&end);
        for(j=start;j<=end;j++)
        {
            if(j%10==2 || j%10==3 || j%10==9)
            {
                count += 1;
            }
        }
        printf("%d\n",count);
        count = 0;
    }
    return 0;
}
