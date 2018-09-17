// http://codeforces.com/contest/1041/problem/B

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>

using namespace std;

long long __gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return __gcd(b, a % b);
}
long long checker(long long first,long long second)
{
	return (first/second);
}
int main()
{
	long long a,b,x,y;
	cin>>a>>b>>x>>y;
	long long hcf =  __gcd(x,y);
	x/=hcf;
	y/=hcf;
	cout<<min(checker(a,x),checker(b,y))<<endl;
	return 0;
}
