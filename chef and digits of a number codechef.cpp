#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,red,green,blue,large,rooms; char c;
    cin>>t;
    for(int i=0;i<t;i++)
    {  red=green=blue=0;
        cin>>rooms;
       for(int i=0;i<rooms;i++)
        {cin>>c;
       if(c=='R')
         red++;
         if(c=='G')
            green++;
            if(c=='B')
           blue++;
}
large=(red>blue?((red>green)?red:green): ((blue>green)?blue:green));
cout<<rooms-large<<endl;
}
}

