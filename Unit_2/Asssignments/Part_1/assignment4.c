#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	double n1 = 0 , n2 = 0 ; 
    printf("Enter two numbers : \n") ; 
    scanf("%lf%lf",&n1,&n2) ; 
    printf("sum : %lfs\n###########################",n1*n2) ; 	
    return 0 ; 
}