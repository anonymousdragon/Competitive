#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<map>
using namespace std;
#define endl '\n'

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    int n,x,s;
    cin>>n>>x>>s;
    int ans = x;
    for(int i=0;i<s;i++)
    {
      int a,b;
      cin>>a>>b;
      if(a==ans)
      {
        ans = b;
      }else if(b==ans){
        ans = a;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}


//https://www.codechef.com/SEPT18B/problems/MAGICHF
