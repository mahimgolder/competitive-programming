//Swap two numbers  
#include <stdio.h>
int main(){
    
    int q, r, t;
    printf("Input the q and r value with space: ");
    scanf("%d %d", &q, &r);

    printf("\n\nYour inputed Value is: %d %d \n", q, r);

    //LOGIC -- using Temporary variable
    /**
    t = r;t = q + r;
    q = t - r;
    r = t - q;
    r = q;
    q = t;
    printf("The result is: %d %d\n", q, r);
    **/


    // without using temporary variable
    q = q + r ;
    r = q - r;
    q = q - r;

    printf("The result is: %d %d\n", q, r);


    return 0;
}