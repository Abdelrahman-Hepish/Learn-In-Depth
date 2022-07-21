#include <stdio.h>
#define ff fflush(stdin) ; fflush(stdout) ;
double mx(double n1 , double n2)
{
    if(n1>= n2)
        return n1 ;
    else
        return n2 ;
}
int main()
{
    int i = 0 , j = 0 , size  ;
    char str1[100] , str2[100] ;
    printf("Enter the string : ") ;
    ff
    gets(str1) ;
    for(i = 0 ;str1[i] != '\0' ;i++) ; i-- ;
    size = i ;
    for(j = 0 , i ;j <= size ; j++ , i--)
        str2[j] = str1[i] ;
    str2[j] = '\0' ;
    printf("Reversed : %s",&str2) ;
    return 0 ;
}