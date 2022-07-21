#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int n , i , num , bol = 0  ; 
    printf("Enter the number of elements : "); 
	ff 
    scanf("%d",&n) ; 
    int arr[n] ; 
    for(i = 0 ;i <n ;i++) scanf("%d",&arr[i]) ; 
    printf("Enter the element to be searched : ") ; 
	ff 
    scanf("%d",&num) ; 
    for(i = 0 ;i <n ;i++) if(num == arr[i]){ bol = i+1 ; break ; }; 
	if(bol != 0 ) printf("Number found at location %d ",bol) ; 
	else printf("Number not found ");
    return 0 ; 
}