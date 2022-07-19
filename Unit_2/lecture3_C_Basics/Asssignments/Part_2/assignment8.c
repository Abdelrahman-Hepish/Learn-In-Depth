#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	char op = '+' ; 
	double n1 , n2 ; 
	printf("Enter operator either + , - , * , / ") ; 
	ff 
	scanf("%c",&op) ; 
	printf("Enter two operands : \n") ; 
	scanf("%lf%lf",&n1,&n2);
	switch(op)
	{
		case '+' : 
		printf("%lf %c %lf = %lf ",n1,op,n2,n1+n2) ; 
		break ; 
		case '-' : 
		printf("%lf %c %lf = %lf ",n1,op,n2,n1-n2) ; 
		break ; 
		case '*' : 
		printf("%lf %c %lf = %lf ",n1,op,n2,n1*n2) ; 
		break ; 
		case '/' : 
		if(n2 == 0 ) 
			printf("Error Division by zero ") ; 
		else 
		printf("%lf %c %lf = %lf ",n1,op,n2,n1+n2) ; 
		break ; 
		default : 
		printf("Fault") ; 
	}
    return 0 ; 
}