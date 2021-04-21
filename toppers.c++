#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t,a[100],b[100],c[100],n[100],d[20];
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>a[i]>>b[i]>>c[i]>>n[i];
  }
  for(int i=0;i<t;i++)
  {
    int r=n[i]-3;
    d[0]=a[i];d[1]=b[i];d[2]=c[i];
    cout<<d[0]<<" "<<d[1]<<" "<<d[2];
    int j=3;
    while(r!=0)
    {
      d[j]=d[j-1]+d[j-2]+d[j-3];
      cout<<" "<<d[j];
      j++;
      r--;
    }
    cout<<endl;
  }
  return 0;
}
