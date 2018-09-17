// Source: https://practice.geeksforgeeks.org/problems/two-repeated-elements/0

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
    int n;
    cin>>n;
    vector<int>arr(n+2);
    for(int i=0;i<arr.size();i++)
      cin>>arr[i];
    for(int i=0;i<arr.size();i++)
      {
        if(arr[abs(arr[i])-1] <0 )
          cout<<abs(arr[i])<<" ";
        arr[abs(arr[i])-1] *=-1;
      }
      cout<<endl;
  }
}
