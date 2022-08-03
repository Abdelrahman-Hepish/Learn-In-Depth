#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ;
long factorial(long n) ;  
int main()
{
	long n ; 
	printf("Enter a positive number : ") ; 
	ff 
	scanf("%ld",&n) ; 
	printf("Factorial of %ld : %ld ",n,factorial(n)) ; 
 	
    return 0 ; 
}
long factorial(long n) 
{
	if(n <= 1 ) return 1 ; 
	else return n * factorial(n-1) ; 
}