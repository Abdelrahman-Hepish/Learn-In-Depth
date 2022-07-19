#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	double n1 = 0 ;
    printf("Enter a number : ") ; 
    ff 
    scanf("%lf",&n1) ; 
    if(n1 == 0 ) 
	  printf("%lf is zero ",n1) ; 
    else if (n1 > 0 )
	  printf("%lf is +ve ",n1) ;
    else 
	  printf("%lf is -ve ",n1) ; 		
    return 0 ; 
}