#include <stdio.h> 
#include <string.h>
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int i , freq = 0 ; 
    char str [100] , c ; 
	printf("Enter a string : ") ; 
	ff 
	gets(str) ; 
	ff 
	printf("Enter a char to find freq : ") ; 
	scanf("%c",&c) ; 
	for(i = 0 ;str[i] != '\0' ; i++) 
	{
		if(str[i] == c ) freq ++ ; 
	}
	printf("Freq of %c = %d ",c,freq) ; 
    return 0 ; 
}