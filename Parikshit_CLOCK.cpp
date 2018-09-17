// CLOCK
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
    int h,m,s,x;
    cin>>h>>m>>s>>x;
    x %= 360;
		int hourE,minE;
		hourE = (x/30);
		minE = ( (x%30)*2 );
		h += hourE;
		if(h>12)
		  h%=12;
		m += minE;
		if(m>59)
			{m%=60;h++;}
			if(h>12)
			  h%=12;

		cout<<h<<" "<<m<<" "<<s<<endl;
  }
  return 0;
}
