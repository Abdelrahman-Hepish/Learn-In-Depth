#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
long Pow(long base , long power)
{
	if(power == 0 ) return 1 ; 
	else return base * Pow(base,power-1) ; 
}
int main()
{
    long base , power ; 
    printf("Enter Base : ") ; 
    ff 
    scanf("%ld",&base) ; 
    printf("Enter Power : ") ; 
    ff 
    scanf("%ld",&power) ; 
    ff 
	printf("%ld^%ld = %ld",base,power,Pow(base,power)) ; 
    return 0 ; 
}