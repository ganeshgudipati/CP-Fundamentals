#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int T,h[5],m[5];
  cin>>T;
  for(int i=0;i<T;i++)
  {
    cin>>h[i]>>m[i];
  }
  for(int i=0;i<T;i++)
  {
    int a=abs(h[i]*30+(m[i]/2)-m[i]*6);
    if(a>180)
      cout<<360-a<<endl;
    else
      cout<<a<<endl;
  }
  return 0;
}
