#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	int i = 0 ; 
	char str [100] ; 
    printf("Enter a string : ") ; 
    ff 
    scanf("%s",str) ; 
    for(i = 0 ;str[i] != '\0' ; i++) ; 
	printf("Legnth of string is %d",i) ; 
    return 0 ; 
}