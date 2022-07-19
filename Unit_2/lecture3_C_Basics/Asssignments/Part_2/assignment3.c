#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ;
double mx(double n1 , double n2) 
{
	if(n1>= n2) 
       return n1 ; 
    else 
	   return n2 ; 
}
int main()
{
	double n1 , n2 , n3 ; 
	printf("Enter three numbers ") ; 
	ff 
	scanf("%lf%lf%lf",&n1,&n2,&n3) ; 
	printf("largest number = %lf",mx(n1,mx(n2,n3))) ; 
    ff 	
    return 0 ; 
}