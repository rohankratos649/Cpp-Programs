#include<iostream>
#include<math.h>
using  namespace std;
int main()
{
    long long int t,n,i,j,k,l,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int min=999999999;
        for(i=1;i<=sqrt(n);i++)
        {
           if(n%i==0)
           {
               l=i;
               b=(n/i);
               k=abs(l-b);
               if(min>k)
               {
                   min=k;
               }
            }
         }
        cout<<min<<"\n";
    }
}
