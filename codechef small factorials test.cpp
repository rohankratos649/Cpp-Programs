#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
cpp_int fact(int n);
int main()
{
     int t,n;
     cin>>t;
     while (t--)
     {
       cin>>n;
       cpp_int f=fact(n);
       cout<<f<<endl;
     }
     return 0;
}
cpp_int fact(int n)
      {
          if(n==0)
          {
              return 1;
          }
          else
              return n*fact(n-1);
        
          
      }
   

