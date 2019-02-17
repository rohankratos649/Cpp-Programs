#include<iostream>
using namespace std;
int main()
{int a,b,c,t;
cin>>t;
while(t--)
{cin>>a>>b>>c;
if(a>b&&a>c)
cout<<max(b,c);
else if(b>a&&b>c)
cout<<max(a,c);
else
{cout<<max(a,b);
}
cout<<endl;
}
return 0;
}
