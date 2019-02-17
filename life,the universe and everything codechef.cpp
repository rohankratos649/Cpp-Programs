#include<iostream>
using namespace std;
int main()
{int num;
while(1)    //while(1) means infinite loop
{
cin>>num;
if(num==42)
break;
else 
cout<<num<<endl;
}
return 0;
}
