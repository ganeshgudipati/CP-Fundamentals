#include <bits/stdc++.h>
using namespace std;
int fun(long long n,long long m)
{
  int count1=0,count2=0;
  if(m==n)
  {
    return 0;
  }
  else if(m<n)
  {
    return -1;
  }
  else if(m%n==0)
  {
    long long q=m/n;
    while(q%2==0)
    {
      q=q/2;
      count1++;
    }
    while(q%3==0)
    {
      q=q/3;
      count2++;
    }
    if(q==1)
    {
      return count1+count2;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    return -1;
  }
}
int main()
{
  //write your code here
  long long n,m;
  cin>>n>>m;
  cout<<fun(n,m);
  return 0;
}
