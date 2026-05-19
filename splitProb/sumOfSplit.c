//Sum of all split digits like [1 2 3 4 --> 10];
#include <stdio.h>
int main(){
    int n, digit, sum=0;
    printf("n:");
    scanf("%d", &n);

    printf("The digits are: %d\n", n);

    while( n!= 0){
        digit = n % 10;  //separate last digit
        sum = sum + digit;   // Add digit to sum.

        n = n/10; // remove last digit
        
    }
    printf("Sum of all degits = %d\n", sum);


    return 0;
}

/*
CONCLUSION: 
           This programe doing the sum of all input numbers using while loop and arith,etic oparator. The modulo oparator(%) is used to separate the reminder part and Division(/) is used to removed the last digit form the  nubmer .This process continus untill the number will be 0.
*/