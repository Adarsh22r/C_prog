//write a program to find the cube of first n numbers
//C program to square first 10 numbers
#include<stdio.h>
int cube(int y);
int main(void)
{
    int x,n;
    printf("Enter N:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        printf("\n%d%d",x,cube(x));

    }
    printf("\n");
}
int cube(int y)
{
    return y*y*y;
}
