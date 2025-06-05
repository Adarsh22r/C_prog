#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,r1,r2,real,img;
    printf("Enter the coefficents a,b&c:");
    scanf("%f%f%f",&a,&b,&c);
    if (a==0)
        printf("Its is not a quadratic equation");
    else{
        D=b*b - (4*a*c);
        if (D==0)
            {
                r1=r2=(-b+sqrt(D))/(2*a);
                printf("The roots are equal=%f",r1);
            }
        else if(D>0)
        {
            r1=(-b+sqrt(D))/(2*a);
            r2=(b+sqrt(D))/(2*a);
            printf("the roots are:\nr1=%f\nr2=%f",r1,r2);
        }
        else
        {
            real = -b/(2*a);
            img =  sqrt(fabs(D)/2*a);
            printf("roots are:\nRoot 1=%.3f+i%.3f\nRoot 2=%.3f-i%.3f",real,img,real,img);
        }
    }
    return 0;
}