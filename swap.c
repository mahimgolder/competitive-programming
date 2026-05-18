//Swap two numbers  
#include <stdio.h>     //Header file
int main(){
    
    int q, r, t;  //Variable declaration:  1st number ,2ed number, temporary variable used for swaping
    printf("Input the q and r value with space: ");
    scanf("%d %d", &q, &r);  //input form user

    printf("\n\nYour inputed Value is: %d %d \n", q, r);    //printing input values

    //LOGIC -- using Temporary variable
    
    t = r;  //swappimg logic
    r = q; //updateing the value 
    q = t;
    printf("The result is: %d %d\n", q, r);
    


    // without using temporary variable (OPTIONAL)
    /*
    q = q + r ;
    r = q - r;
    q = q - r;
    printf("The result is: %d %d\n", q, r);
    */


    return 0;
}


/*
CONCLUSION:
           This programee is describe swapping 2numbers useing temporary variable and arithmetics oparators,
           
*/