#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int r , c , i , j  ; 
    printf("Enter Rows and columns of the matrix \n") ; 
    ff 
    scanf("%d %d",&r,&c) ; 
	int arr[r][c] , tra [c][r] ;
    ff 
    printf("Enter the elements \n"); 	
	ff 
	for(i = 0 ; i< r ; i ++ ) 
	{
		for(j = 0 ;j < c ;j++)
		{
			printf("Enter element of arr [%d] [%d] : ",i+1,j+1) ; 
			ff 
			scanf("%d",&arr[i][j]) ; 
			tra[j][i] = arr[i][j] ; 
		}
	}
	printf("Entered matrix \n") ; 
	for(i = 0 ; i< r ; i ++ ) 
	{
		for(j = 0 ;j < c ;j++)
		{
			printf("%d ",arr[i][j]) ; 
		}
		printf("\n") ; 
	}
	printf("Transpose of matrix \n") ; 
	for(i = 0 ; i< c ; i ++ ) 
	{
		for(j = 0 ;j < r;j++)
		{
			printf("%d ",tra[i][j]) ; 
		}
		printf("\n") ;
	}
    return 0 ; 
}