#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
  if(a==0)
    return b;
  else if(b==0)
    return a;
  else if(a==b)
    return a;
  else if(a>b)
    return gcd(a-b,b);
  else
    return gcd(a,b-a);
}
int main()
{
  //write your code here
  int t;
  long long l,r;
  cin>>t;
  while(t--)
  {
    cin>>l>>r;
    //long long a1=gcd(l,r);
    if(l==r)
    {
      cout<<l<<endl;
    }
    else
    {
      cout<<"1"<<endl;
    }
  }
  return 0;
}
