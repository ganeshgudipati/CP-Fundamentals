#include <bits/stdc++.h>
using namespace std;
void seq(long long n)
{
  long long b=0;
  cout<<n<<" ";
  while(n!=1)
  {
  if(n%2==0)
  {b=floor(sqrt(n));}
  else
  {b=floor(sqrt(n)*sqrt(n)*sqrt(n));}
  cout<<b<<" ";
  n=b;
  }
  cout<<endl;
}
int main()
{
  //write your code here
  long long n,T;
  cin>>T;
  for(int i=0;i<T;i++)
  {
    cin>>n;
    seq(n);
    cout<<endl;
  }
  return 0;
}
