#include <stdio.h>
int main()
{
    int a,b,i,S,D,P,Q,R;
    char op,c;
    i=0;
    while (i==0)
    {        
        printf("Enter first number=");
        scanf("%d",&a);
        printf("Enter second number=");
        scanf("%d",&b);
        printf("Enter the opeartor[+,-,*,/,%]=");
        scanf(" %c",&op);
        switch (op)
        {
            case '+':
                S=a+b;
                printf("Sum= %d",S);    
                break;
            case '-':
                D=a-b;
                printf("Diference= %d",D);
                break;
            case '*':
                P=a*b;
                printf("Product= %d",P);
                break;
            case '/':
                Q=a/b;
                printf("Quotient = %d",Q);
                break;
            case '%':
                R=a%b;
                printf("Remainder= %d",R);
                break;
            default:
                printf("Invalid Operator!!");
        }
        printf("\n Do you want to continue[y/n]=");
        scanf(" %c",&c);
        if(c=='n')
        {
            i++;
        }
    }
    
    return 0;
}