#include<iostream>
using namespace std;
int main()
{int t,cakes,packs;
cin>>t;
while(t--)
{cin>>cakes;
if(cakes%2==0)
cout<<cakes/2<<"\n";
else
cout<<cakes/2+1<<"\n";
}
return 0;
}
