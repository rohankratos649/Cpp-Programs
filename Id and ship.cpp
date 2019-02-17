#include<iostream>
using namespace std;
int main()
{int t;
char a;
cin>>t;
while(t--)
{cin>>a;
if(a=='B'||a=='b')
cout<<"BattleShip"<<endl;
if(a=='C'||a=='c')
cout<<"Cruiser"<<endl;
if(a=='F'||a=='f')
cout<<"Frigate"<<endl;
if(a=='D'||a=='d')
cout<<"Destroyer"<<endl;
}
return 0;
}
