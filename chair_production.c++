#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  string s;
  cin>>t;
  while(t--)
  {
    int req=0,fre=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='L' || s[i]=='D')
      {
        fre++;
      }
      else if(fre<=0)
      {
        req++;
      }
      else if(fre>0)
      {
        fre--;
      }
    }
    if(req>0)
    {
      cout<<req*5<<endl;
    }
    else
    {
      cout<<"0"<<endl;
    }
  }
  return 0;
}
