// reverse the all given int nubmers like (12345 --> 54321)
#include <stdio.h>
int main(){
    int n , digit;
    printf("n:");\
    scanf("%d", &n);

    printf("The digits are: %d\n", n);
    while(n != 0){
        digit = n % 10;
        printf(" %d", digit);
        n = n/10; //Remove the last digit ( this line is importnet because it is conndition )
    }
    printf("\n");


    return 0;
}