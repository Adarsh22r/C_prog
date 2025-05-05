#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,guess,attemps = 0;

    srand(time(0));
    num = rand()%10 +1;

    printf("Guess the number between 1 and 10.");

    do{
        printf("Enter your guess: ");
        scanf("%d",&guess);
        attemps++;

        if (guess>num){
            printf("Too high! Try again.\n");
        }
        else if(guess<num){
            printf("Too low! try again\n");

        }else{
            printf("congrats!You guessed the number in %d attempts.\n ",attemps);
        }
        }while(guess!=num);
        
    return 0;
    }