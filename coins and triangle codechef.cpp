#include<iostream>
#include<cmath>
using namespace std;
int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{int n,h;
cin>>n;
h=(-1+sqrt(1+8*n))/2;
cout<<h<<endl;
}
return 0;
}

