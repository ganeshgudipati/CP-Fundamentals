#include <bits/stdc++.h>
using namespace std;
long fun(long n)
{
  long r=0,k,z;
  for(long i=1;i<n;i++)
  {
    if(n%i==0 && i!=1)
    {
      r=i;
      break;
    }
  }
  if(n==1)
  {
    z=0;
  }
  else if(r==0)
  {
    z=n;
  }
  else
  {
    k=n/r;
    z=fun(r)+fun(k);
  }
  return z;
}
int main()
{
  //write your code here
  long t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    long r=fun(n);
    cout<<r<<endl;
  }
  return 0;
}
