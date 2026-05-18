// Fibonacci Problem Ex: 2 1 3 4 7 11 18
#include <stdio.h>
void main(){
    int  a, b, c, n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter 1st two numbers: ");
    scanf("%d %d",&a, &b);
    printf("%d %d",a, b);
    for ( int j = 1; j <= n-2 ; j++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;

    }
    printf("\n");
    


    

}