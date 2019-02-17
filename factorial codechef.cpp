#include<iostream>
using namespace std;
int main()
{int num,r=0,t;
cin>>t;
while(t--)
{cin>>num;
r=0;
 while(num>5)       /*quotient=num/5; then sum of all quotients is the no. of zeroes in factorial 
                      of any number*/
 
 {r=r+num/5;         
 num=num/5;
}
cout<<r<<endl;
}
return 0;
}
