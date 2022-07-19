#include <stdio.h> 
#define ff fflush(stdin) ; fflush(stdout) ; 
int main()
{
	char c ; 
    printf("Enter an alphabet : ") ; 
    ff 
    scanf("%c",&c) ; 
    switch(c)
	{
     case 'a' : 
     case 'e' : 
     case 'i' : 
     case 'o' : 
	 case 'u' : 
	   printf("%c is a vowel. ",c ) ; 
	 break ; 
	 default  : 
       printf("%c is a constant.",c) ;
	 break;   
    }
    ff  	
    return 0 ; 
}