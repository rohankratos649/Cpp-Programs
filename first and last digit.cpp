#include<iostream>
using namespace std;
int main()
{int t,sum=0,rev=0,ld,fd;
long int num,num1;
cin>>t;
while(t--)
{cin>>num;
num1=num;
while(num1!=0)
{
rev=rev*10;
rev=rev+num1%10;
num1=num1/10;
}
ld=rev%10;
fd=num%10;
sum=ld+fd;
cout<<sum<<"\n";
}
return 0;
}
