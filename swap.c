//Swap two numbers  
#include <stdio.h>
int main(){
    
    int q, r, t;
    printf("Input the q and r value with space: ");
    scanf("%d %d", &q, &r);

    printf("\n\nYour inputed Value is: %d %d \n", q, r);

    //LOGIC -- using Tenporary variable
    t = r;
    r = q;
    q = t;
    printf("The result is: %d %d\n", q, r);

    // without temp



    return 0;
}