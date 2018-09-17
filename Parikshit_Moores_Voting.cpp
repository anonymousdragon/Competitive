// Moore's voting algorithm, finds majority element in an array (O(N) time)
// Source https://practice.geeksforgeeks.org/problems/majority-element/0
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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int majority_index = 0,count=1;
    for(int i=1;i<n;i++)
    {
      if(arr[i]==arr[majority_index])
        count++;
      else
        count--;
      if(count==0)
         {count=1;majority_index=i;}
    }
    count=0;
    for(int i=0;i<arr.size();i++)
      if(arr[i]==arr[majority_index])
        count++;
    if(count>n/2)
      cout<<arr[majority_index]<<endl;
    else
      cout<<"NO\n";
  }
  return 0;
}
