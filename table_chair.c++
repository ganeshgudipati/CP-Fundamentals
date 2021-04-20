#include <bits/stdc++.h>
using namespace std;
int main()
{
  //write your code here
  int T;
  long long M,R1,R2,R3;
  long long j,k;
  cin>>T;
  for(int i=0;i<T;i++)
  {
    cin>>M>>R1>>R2>>R3;
    long long r=M%4;
    if(r==0)
    {
      cout<<r<<endl;
    }
    else if(r==1)
    {
     j=min(R1+R1+R1,R1+R2);
     k=min(j,R3);
     cout<<k<<endl;
    }
    else if(r==2)
    {
      j=min(R1+R1,R2);
      k=min(R3+R3,j);
      cout<<k<<endl;
    }
    else if(r==3)
    {
      j=min(R1,R2+R3);
      k=min(j,R3+R3+R3);
      cout<<k<<endl;
    }
  }
  
  return 0;
}
