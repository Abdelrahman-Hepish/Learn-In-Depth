#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	long  fact = 1 , n ; 
	printf("Enter the numer : ")  ;
	ff 
	scanf("%ld",&n ) ; 
	if(n < 0) 
		printf("Error !! factorial of negative number doesn't exist") ; 
	else 
	{				
		for(int i = 1 ;i<=n;i++) fact *= i ; 
		printf("factorial = %ld",fact) ; 
		ff  
	}		
    return 0 ; 
}