#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	long  sum = 0 , n ; 
	printf("Enter the numer : ")  ;
	ff 
	scanf("%ld",&n) ; 
	for(int i = 1 ;i<=n;i++) sum += i ; 
	printf("sum = %ld",sum) ; 
	ff  	
    return 0 ; 
}