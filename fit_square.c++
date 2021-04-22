#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t,m[16],n[16];
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>m[i]>>n[i];
  }
  for(int i=0;i<t;i++)
  {
    int d=m[i]*n[i];
    int q=d/2;
    cout<<q<<endl;
  }
  return 0;
}
