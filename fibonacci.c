// Fibonacci Problem Ex: 2 1 3 4 7 11 18
#include <stdio.h> //the header file is used to for input and output function form user; like printf ,scanf
void main(){
    int  a, b, c, n; // assign the integer type data  a, b, c, n; that means frist number,second number, next fibo number, how many numbers will be printed.
    printf("Enter n: "); //This parts takes how many fibo number takes from user 
    scanf("%d", &n);

    printf("Enter 1st two numbers: ");    //This line is print to take value from the user 
    scanf("%d %d",&a, &b);   //this line takeing 1st two numbers .

    printf("%d %d",a, b);    //this print the values of a and b taken from the user  

    for ( int j = 1; j <= n-2 ; j++) //This loops runs n-2 times because the 1st 2 numbers are alraedy printed . 
    {
        c = a + b;   //Fibo ligic: the next number is calculated by adding previous 2 numbers 
        printf(" %d", c);   //This is prints the 3ed number , which is the sum of the previious 2 numbers

        a = b;    //Updateing The value: This shifts the nubmer forword the next calculation.
        b = c;

    }
    printf("\n");
    
}


/*
Conculasion:
            This programme ganerates a Fibonacci series using user input and for looop in c programming
*/