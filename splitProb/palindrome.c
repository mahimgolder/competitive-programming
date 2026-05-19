// Write a progeame to check the given nubmberm is palindrome or not . like : 121, 1221, 1331 

#include <stdio.h>
int main(){
    int n;

    printf("n: ");
    scanf("%d", &n);

    int mainNum, digit,  revarse = 0;

    mainNum = n;

    while ( n != 0){
        digit = n % 10;
        revarse = revarse * 10 + digit;
        n= n/10;

    }
    if(mainNum  == revarse){
        printf("Palinedrome Number\n");
    }
    else{
        printf("Not Palinedrome Number\n");
    }
    


    return 0;
}