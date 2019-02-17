#include<iostream>
using namespace std;
int main()
{int t,sum=0,rev=0,ld,fd;
long int num;
cin>>t;
while(t--)
{cin>>num;
ld=num%10;
while(num>=10)
{
num=num/10;
}
fd=num;
sum=ld+fd;
cout<<sum<<"\n";
}
return 0;
}
