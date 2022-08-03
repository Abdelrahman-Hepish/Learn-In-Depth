#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int isPrime(int n ) ; 
int main()
{
	int n1 , n2 ; 
    printf("Enter 2 Numbers inclusive : \n");
    ff 
    scanf("%d %d",&n1,&n2) ;
	printf("Prime numbers in [%d,%d] : ",n1,n2) ; 
    for(;n1<=n2;n1++) 
	{
		if(isPrime(n1))
			printf("%d ",n1) ; 
	}
    return 0 ; 
}
int isPrime(int n )
{
    int ret = 1 , i  ;
    if(n < 2 ) ret =  0 ;
    for(i = 2 ; i*i <= n ; i++ )
    {
        if(n%i == 0 )
        {
            ret =  0 ;
        }
    }
    return ret ;
}