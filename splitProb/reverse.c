// reverse the all given int nubmers like (12345 --> 54321)
#include <stdio.h>   //Standered input output library
int main(){
    int n , digit;   //declaring varible for n= takeing nubmer digits = doing last digit store. 
    printf("n:");   //Ask user for input
    scanf("%d", &n); //takeing an int form user 

    printf("The digits are: %d\n", n);
    while(n != 0){        // the while loop runs until n=0 
        digit = n % 10;          //Cuting the last digits as a reminder.
        printf(" %d", digit);  //print the reeminder as a revarse in 1st number 
        n = n/10;          //Remove the last digit form the number   ( this line is importnet) without this line the loop will be infinity
    }
    printf("\n");



    return 0;
}

/*
CONCLUSION:
             This programe revarse an integer number by repeatly cuting the reminder part using the modulo operator(%) and removing last digit useing division (/)
*/