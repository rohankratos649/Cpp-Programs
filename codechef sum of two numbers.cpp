#include<iostream>
using namespace std;
int main()
{int r,t,n,sum=0;
cin>>t;
while(t--)
{cin>>n;
while(n!=0)
{
r=n%10;
 n=n/10;
  sum=sum+r;
}
cout<<sum;
sum=0;
cout<<endl;
}
return 0;
}
