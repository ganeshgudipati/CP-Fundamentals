#include <bits/stdc++.h>
using namespace std;
long long fun(long long n)
{
  long long m=n,d=1,count=0,tc=0;
  while(m!=0)
  {
    m=m/10;
    d=d*10;
    count++;
  }
  while(count!=0)
  {
    d=d/10;
    tc=tc+(n-d+1)*count;
    n=d-1;
    count--;
  }
  return tc;
}
int main()
{
  //write your code here
  int t;
  long long n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    cout<<fun(n)<<endl;
  }
  return 0;
}
