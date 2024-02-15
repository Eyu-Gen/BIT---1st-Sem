#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of rows=");
    scanf("%d",&n);
    i=0;
    k=1;
    while (i<n)
    {
        j=0;
        while(j<=i)
        {
            printf("%d ",k);
            j++;
            k++;
        }
        printf("\n");
        i++;
    }

    return 0;    
}
