/*
 * Task 1 :
 * write a program in this program the user has to choose between calculating circle area or circle
   circumference. The choice comes by taking a character from the keyboard using the (getche)
   function. If the user presses „a‟ character it proceeds with area calculation and printing. If the
   user presses „c‟ character it proceeds with circumference calculation and printing. If the user
   presses other letters the program prints an error message
 */
#include <stdio.h>
#include "math.h"
#define ff fflush(stdin) ; fflush(stdout) ;
int main() {
    double radious = 0  , area = 0 , circ = 0 ;
    char dicision = 'a' ;
    printf("Enter Circle Radius \n") ;
    ff
    scanf("%lf",&radious) ;
    printf("Enter your Choice \na-Area \tc-Circumference \n");
    ff
    scanf("%c",&dicision) ;
    if(dicision == 'a')
    {
        area = M_PI * radious * radious ;
        printf("Area = %lf",area) ;
    }else if (dicision == 'c')
    {
        circ = 2 * M_PI * radious ;
        printf("Circumference = %lf",circ) ;
    }

    return 0;
}
