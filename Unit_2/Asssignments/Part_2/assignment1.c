#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int n ; 
	printf("Enter an integer you want to check : ") ; 
	ff 
	scanf("%d",&n) ; 
	if(n%2 == 0 ) printf("%d is even.",n) ; 
	else printf("%d is odd.",n) ; 
	ff 
    return 0 ; 
}