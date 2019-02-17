#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,ans,n;
    cin>>t;
    while(t--){
        cin>>n;
        n/=2;
        ans=n*(n-1)/2;
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}

