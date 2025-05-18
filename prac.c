//C program to square first 10 numbers
#include<stdio.h>
int square(int y);
int main(void)
{
    int x;
    for(x=1;x<=10;x++)
    {
        printf("\n%d%d",x,square(x));

    }
    printf("\n");
}
int square(int y)
{
    return y*y;
}