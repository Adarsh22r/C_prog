#include<stdio.h>
int main(){
    float a,b,result;
    char ch;
    printf("Enter the operation:(*,+,/,-)");
    scanf("%c",&ch);
     printf("Enter the a and b:");
    scanf("%f %f", &a, &b);
    switch(ch){
        case '+':result = a+b;
                printf("Addition is: %f" ,result);
                break;
        case '-':result = a-b;
                printf("subtraction is:%f " ,result);
                break;
        case '*':result = a*b;
                printf("Multiplication is:%f " ,result);
                break;
        case '/': 
            if(b!=0){
                result = a/b;
                printf("DIVISIOn is: %f" ,result);}
            else{
                printf("Division by zero is not possible!!");}
            break;
        default:printf("INVALID operation");

    }
}