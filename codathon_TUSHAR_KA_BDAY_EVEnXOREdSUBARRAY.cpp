#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		ll arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		ll curr = 0, even = 1, odd = 0, ans = 0;
		for(i=0;i<n;i++){
			curr ^= arr[i];
			if(curr & 1)
				ans+=odd, odd++;
			else
				ans+=even, even++;
		}
		cout<<ans<<endl;
	}
	return 0;
}