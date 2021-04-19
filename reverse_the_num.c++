#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int X,q=0,r;
  cin>>X;
  while(X!=0)
  {
    r=X%10;
    q=q*10+r;
    X=X/10;
  }
  cout<<q;
  return 0;
}
