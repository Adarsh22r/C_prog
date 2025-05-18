//fibonacci
#include<stdio.h>
int fibo(int n);
int main(){
    int n,i=0,res;
    printf("\nEnter the number of terms in the series");
    scanf("%d",&n);
    printf("\nFibonacci series: ");
    for(i=0;i<n;i++){
        res = fibo(i);
        printf("%d\t",res);

    }
    return 0;
}
int fibo(int n)
{
    if(n==0){
        return 0;}
    else if(n==1){
        return 1;}
    else{
        return(fibo(n-1) +fibo(n-2));}
}