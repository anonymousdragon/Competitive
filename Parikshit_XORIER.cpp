#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>

using namespace std;

void preProcess(vector<bool>&sieve)
{
  for(int i=2;(i*i)<=sieve.size();i++)
    if(sieve[i])
      for(int j=(2*i);j<sieve.size();(j+=i))
            sieve[j]=false;
}
int main()
{
  vector<bool>sieve(pow(10,6)+2,true);
  preProcess(sieve);
  int ctr=0;
  for(int i=2;i<sieve.size();i++)
    if(sieve[i])
        ctr++;
  cout<<ctr<<endl;
  // int t;
  // cin>>t;
  // while(t--)
  // {
  //   int n;
  //   cin>>n;
  //   vector<int>arr(n);
  //   for(int i=0;i<n;i++)
  //     cin>>arr[i];
  //
  // }
  return 0;
}
