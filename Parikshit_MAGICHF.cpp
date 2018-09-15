#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,x,s;
      cin>>n>>x>>s;
      int u,v;
      while(s--)
      {
        cin>>u>>v;
        if(x==u)
           x = v;
        else
          if(x==v)
            x = u;
        // cout<<"Position is "<<x<<endl;
      }
    cout<<x<<endl;
  }
return 0;
}
