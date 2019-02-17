#include<iostream>
using namespace std;
int main()
{int a,b,t,min,max;
cin>>t;
while(t--)
{cin>>a>>b;
if(a>b)
{min=a;
}
else 
{min=b;
}
cout<<min<<" "<<a+b<<endl;
}
return 0;
}
