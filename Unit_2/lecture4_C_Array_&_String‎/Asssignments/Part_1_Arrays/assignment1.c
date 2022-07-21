#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int i , j  ; 
	double m1[2][2] , m2 [2][2] ; 
	printf("Enter the elements fo 1st matrix \n") ; 
	ff 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
			scanf("%lf",&m1[i][j]); 
		}
	}
	printf("Enter the elements fo 2nd matrix \n") ; 
	ff 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
			scanf("%lf",&m2[i][j]); 
			m2[i][j] += m1[i][j] ; 
		}
	}	
	ff 
	printf("Sum of Matrix \n"); 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
			printf("%5.1lf ",m2[i][j]) ; 
		}
		printf("\n") ; 
	}	
    return 0 ; 
}