// http://codeforces.com/contest/1041/problem/A
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int temp;
	int mini=INT_MAX,maxi=INT_MIN;
	for(int i=0;i<n;i++)
		{
			cin>>temp;
			mini = min(mini,temp);
			maxi = max(maxi,temp);
		}
	temp = 	( (maxi-mini) + 1) - n;
	if(!temp)
		cout<<0<<endl;
	else
			cout<<temp<<endl;
	return 0;
}
