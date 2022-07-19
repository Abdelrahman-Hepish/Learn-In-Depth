#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int n = 0 ; 
    printf("Enter a integer: \n") ; 
    scanf("%d",&n) ; 
    printf("You entered: %d\n###########################",n) ; 	
    return 0 ; 
}