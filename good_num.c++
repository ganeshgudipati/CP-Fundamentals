#include <bits/stdc++.h>
  using namespace std;
  typedef long long ll;
  ll mul(int i)
  {
    ll num=1;
    while(i--)
    {
      num=num*3;
    }
    return num;
  }
  ll fun(ll n)
  {
    ll m=n,num=0;
    int count=0;
    while(m!=0)
    {
      m=m/3;
      count++;
    }
    ll sum=0;
    for(int i=0;i<count+1;i++)
    {
      sum=sum+mul(i);
    }
    for(int i=count;i>=0;i--)
    {
      sum=sum-mul(i);
      if(sum<n)
      {
        sum=sum+mul(i);
      }
    }
    return sum;
  }
  
  int main()
  {
    //write your code here
    int t;
    ll n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      cin>>n;
      n=fun(n);
      cout<<n<<endl;
    }
    return 0;
  }
