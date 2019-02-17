#include<iostream>

using namespace std;

int main(){
	int t, n, k, ans;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ans = 0;
		for(int i =1; i<=k; i++)
			if(ans<n%i)
				ans = n%i;
		cout<<ans<<endl;
	}
	return 0;
}
