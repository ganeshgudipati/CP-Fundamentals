#include <bits/stdc++.h>
using namespace std;
void show(int f,int s)
{
    for(int i=0;i<f;i++)
    {
      cout<<"4";
    }
    for(int i=0;i<s;i++)
    {
      cout<<"7";
    }
}
int main()
{
  int n,f=0,s=0,r;
  cin>>n;
  int k=n;
  s=n/7;  r=n%7;
  if(n<4)
  {
    cout<<"-1";
  }
  else if(r==0)
  {
    f=0;
  }
  else if(r==1 && s>=1)
  {
    s--;
    f=f+2;
  }
  else if(r==2 && s>=2)
  {
    s=s-2;
    f=f+4;
  }
  else if(r==3 && s>=3)
  {
    s=s-3;
    f=f+6;
  }
  else if(r==4)
  {
    f=f+1;
  }
  else if(r==5 && s>=1)
  {
    s--;
    f=f+3;
  }
  else if(r==6 && s>=2)
  {
    s=s-2;
    f=f+5;
  }
  else
  {
    cout<<"-1";
    s=0;f=0;
  }
  show(f,s);
  return 0;
}
