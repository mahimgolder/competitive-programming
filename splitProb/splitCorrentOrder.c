//Write a program to split all the digits from an integer number like (12345 --> 1 2 3 4 5)

#include <stdio.h>
int main(){
    int n, arry[100], digit, i=0;
    printf("n:");
    scanf("%d", &n);

    printf("The digits are: %d\n", n);

    while(n != 0){
        digit = n % 10;
        arry[i] = digit;
        n = n/10;
        i++;
        
    }
     // Print digits in correct order
    for(int j = i - 1; j >= 0; j--) {

        printf("%d ", arry[j]);
    }

    printf("\n");


    return 0;
}