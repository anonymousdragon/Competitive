// Big_Daat Codeforces
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>arr1(n),arr2(m);
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int j=0;j<m;j++)
		cin>>arr2[j];
	vector<vector< long int> >mat(n,vector<long int>(m,0))	;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			mat[i][j] = (pow(10,9)*arr1[i]+arr2[j]);
			if(i==0 && j!=0)
			  mat[i][j] += mat[i][j-1];
			else
				if(j==0 && i!=0)
					mat[i][j] += mat[i-1][j];
			else if(i!=0 && j!=0)
			    mat[i][j] += max(mat[i-1][j],mat[i][j-1]);
		}
	cout<<mat[n-1][m-1];
	return 0;
}
