#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	double n1 = 0 , n2 = 0; 
    printf("Enter value a : ") ; 
    scanf("%lf",&n1) ; 
	printf("Enter value b : ") ; 
    scanf("%lf",&n2) ; 
	n1 += n2 ; 
    n2 = n1 - n2 ; 
    n1 = n1 - n2 ; 	
    printf("After swapping, value of a = %lf\nAfter swapping, value of b = %lf\n###########################",n1,n2) ; 	
    return 0 ; 
}