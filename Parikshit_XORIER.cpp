// XORIER
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>

using namespace std;

// vector<int> preProcess(vector<bool>&sieve)
// {
// 	vector<int>primes;
// 	int i;
//   for(i=2;(i*i)<=sieve.size();i++)
//     if(sieve[i])
//       {
// 				primes.push_back(i);
// 				for(int j=(2*i);j<sieve.size();(j+=i))
//             sieve[j]=false;
// 			}
// 	for(;i<sieve.size();i++)
// 	  if(sieve[i])primes.push_back(i);
// 	cout<<primes.size()<<endl;
// 	sieve.clear();
// 	return primes;
// }
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
      cin>>arr[i];
		long long int ctr=0;
		int temp;
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
			{
				int temp = arr[i] ^ arr[j];
				if(temp%2==0)
					if(temp!=2)
							ctr++;
			}
		cout<<ctr<<endl;
  }
  return 0;
}
