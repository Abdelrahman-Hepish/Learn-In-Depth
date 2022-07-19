#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int n1 = 0 , n2 = 0 ; 
    printf("Enter two integers: \n") ; 
    scanf("%d%d",&n1,&n2) ; 
    printf("sum : %d\n###########################",n1+n2) ; 	
    return 0 ; 
}