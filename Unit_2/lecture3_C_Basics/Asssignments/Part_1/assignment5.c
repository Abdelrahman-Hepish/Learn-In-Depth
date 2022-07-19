#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	char c ;  
    printf("Enter a character : \n") ; 
    scanf("%c",&c) ; 
    printf("ASCII value of %c = %d \n###########################",c,c) ; 	
    return 0 ; 
}