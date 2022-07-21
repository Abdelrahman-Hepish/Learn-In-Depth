#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int n , i ; 
	double sum = 0 ; 
    printf("Enter the number of the data : ") ; 
    ff 
    scanf("%d",&n) ; 
    double  arr[n] ; 
    for(i = 0 ;i<n;i++)
	{
      printf("%d. Enter number : ",i+1) ; 
      ff 
      scanf("%lf",&arr[i]) ; 
	  sum += arr[i] ; 
    }	  
	printf("Average : %.2lf ",sum/n) ; 
    return 0 ; 
}