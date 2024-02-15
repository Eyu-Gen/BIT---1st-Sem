#include <stdio.h>
int main()
{
    // ........RightHalf Pyramid.....
    int i,j,k,n1,n2,m;
    printf("Enter the number of rows[RightHalf Pyramid]=");
    scanf("%d",&n1);
    i=0;
    while(i<n1)
    {
        j=0;
        while(j<=i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    // .........Full Pyramid......
    printf("Enter the number of rows[Full Pyramid]=");
    scanf("%d",&n2);
    i=0;
    m=n2-1;
    while(i<n2)
    {
        k=0;
        while(k<m)
        {
            printf(" ");
            k++;
        }
        j=0;
        while(j<=i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
        m--;
    }

    return 0;
}