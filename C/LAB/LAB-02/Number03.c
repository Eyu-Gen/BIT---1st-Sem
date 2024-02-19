#include <stdio.h>
int main()
{
    int i,sum;
    sum=0;
    i=1;
    while(i<=100)
    {
        sum=sum+i;
        i++;
    }

    printf("Sum= %d",sum);

    return 0;
}