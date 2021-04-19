#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int N,t[100],c[100];
  int count=0;
  cin>>N;
  for(int i=0;i<N;i++)
  {
    cin>>t[i]>>c[i];
  }
  for(int i=0;i<N;i++)
  {
    if(c[i]-t[i]>=2)
      count++;
  }
  cout<<count;
  return 0;
}
