#include <bits/stdc++.h>
using namespace std;
bool f(int a)
{
  int q=a;
  int r;
  int sum=0;
  bool check=false;
  while(q!=0)
  {
    r=q%10;
    sum=sum+r;
    q=q/10;
  }
  if(sum==10)
  {
    check=true;
  }
  else
  {
    check=false;
  }
  return check;
}
int fun(int k)
{
  int a=19;
  int r=a;
  int count=0;
  bool check=false;
  for(int i=1;i<k;i++)
  {
    check=false;
    while(check==false)
    {
      a=a+9;
      check=f(a);
    }
    r=a;
  }
  return r;
}
int main()
{
  //write your code here
  int t,k,x;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>k;
    x=fun(k);
    cout<<x<<endl;
  }
  return 0;
}
