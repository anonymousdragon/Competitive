// CHEFADV
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>

using namespace std;

bool reducer(long long m,long long x)
{
  if(x>=m && m==1)
    return true;
  else
      if(x<m)
        {
            if(x==1)
               return true;
            long long r = m%x;
            if(r==1)
              return true;
        }
  return false;
}
int main()
{
  long long t;
  cin>>t;
  string a = "Chefirnemo";
  string b = "Pofik";
  long long n,m,x,y;
  while(t--)
  {
    cin>>n>>m>>x>>y;
    if( (reducer(n,x) && reducer(m,y)) || (reducer(n-1,x) && reducer(m-1,y)) )
      cout<<a<<"\n";
    else
      cout<<b<<"\n";
  }
return 0;
}
