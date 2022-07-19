#include <stdio.h>
#define ff fflush(stdin) ; fflush(stdout)
int mn(int n1 , int n2 )
{
    if(n1<=n2 ) return n1 ;
    else return n2 ;
}
int mx(int n1 , int n2 )
{
    if(n1<=n2 ) return n2 ;
    else return n1 ;
}
int main() {
    int n1 , n2 , n3 ;
    printf("Enter 3 Numbers \n") ;
    ff ;
    scanf("%d%d%d",&n1,&n2,&n3) ;
    printf("%d < %d < %d",mn(n1,mn(n2,n3)) ,n1+n2+n3 - (mn(n1,mn(n2,n3)) + mx(n1,mx(n2,n3))) , mx(n1,mx(n2,n3))) ;
    return 0;
}
