//C program to square first n numbers
#include<stdio.h>
int square(int y);
int main(void)
{
    int x,n;
    printf("Enter N:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        printf("\n%d%d",x,square(x));

    }
    printf("\n");
}
int square(int y)
{
    return y*y;
}