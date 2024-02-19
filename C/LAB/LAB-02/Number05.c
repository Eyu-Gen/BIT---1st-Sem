#include <stdio.h>
int main()
{
    // ......Factorial of an integer N......
    int n,i,factorial;
    printf("Enter the number=");
    scanf("%d",&n);
    factorial=i=1;
    while(i<=n)
    {
        factorial=factorial*i;
        i++;
    }
    printf("Factorial= %d \n",factorial);

    //.....computation of a raised to power b.....
    int a,b,ans;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);
    ans=a;
    i=1;
    do
    {
        ans=ans*a;
        i++;
    } while (i<b); 
    printf("Answer= %d",ans);

    return 0;
}