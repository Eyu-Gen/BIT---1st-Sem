#include <stdio.h>
int main()
{
    int score;
    printf("Enter the score=");
    scanf("%d",&score);
    if(score>=80)
    {
        printf("Distinction!!");
    }
    else if(score>=70 && score<80)
    {
        printf("First Division!!");
    }
    else if(score>=55 && score<70)
    {
        printf("Second Division!!");
    }
    else if(score>=40 && score<55)
    {
        printf("Third Division!!");
    }
    else
    {
        printf("Fail :(");
    }

    return 0;
}