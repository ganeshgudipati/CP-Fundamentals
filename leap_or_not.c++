#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  int N[10];
  cin>>T;
  for(int i=0;i<T;i++)
  {
    cin>>N[i];
  }
  for(int i=0;i<T;i++)
  {
    if(N[i]%400==0)
      cout<<"Yes"<<endl;
    else if(N[i]%100==0)
      cout<<"No"<<endl;
    else if(N[i]%4==0)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
  return 0;
}
