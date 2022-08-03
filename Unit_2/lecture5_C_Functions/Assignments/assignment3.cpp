#include <bits/stdc++.h>
using namespace  std ;
string s ;
string Rev(string s )
{
    string ret ;
  if(0 == s.length() ) return "\0" ;
  else
  {
      ret = Rev((s.substr(1,string::npos))) + s[0] ;
      return ret ;
  }
}
int main() {
    cin>>s ;
    cout<<Rev(s) ;
    return 0;
}
