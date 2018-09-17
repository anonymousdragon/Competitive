// http://codeforces.com/contest/1041/problem/C

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>
#include<stack>

using namespace std;

bool comp(int a,int b)
{
	return(a>b);
}
int main()
{
	int n,m,d;
	cin>>n>>m>>d;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end(),comp);
	stack<int>st;
	for(int i=0;i<arr.size();i++)
		st.push(arr[i]);
	int prev = st.top();
	st.pop();
	vector<int>ans;
	int day = 1;
	int temp;
	ans.push_back(day);
	while(!st.empty())
	{
		temp = st.top();
		st.pop();
		temp+=d
		prev+=temp;
		if(temp > m)
		  {prev%=m;day++;}
		ans.push_back(day);
	}
	cout<<day<<endl;
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
}
