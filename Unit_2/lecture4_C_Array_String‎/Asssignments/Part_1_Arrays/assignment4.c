#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int arr[1000] ; 
	int size , num , pos , i ; 	
	printf("Enter the size of the array : ") ; 
	ff 
	scanf("%d",&size) ; 
	for( i = 0 ;i<size;i++) 
	{
		scanf("%d",&arr[i]) ; 
	}
	ff 
	printf("Enter the element to be inserted : ") ; 
	ff 
	scanf("%d",&num); 
	printf("Enter position : ");
	ff 
	scanf("%d",&pos) ; 
	for(i = size ;i>=pos ;i--)
	{
		arr[i] = arr[i-1] ; 
	}
	arr[pos-1] = num ; 
	for(i = 0 ;i<=size;i++) printf("%d ",arr[i]) ; 
    return 0 ; 
}