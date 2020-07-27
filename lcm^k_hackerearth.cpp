#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll factor[1000009];
ll power(ll x,ll y, ll mod){
	ll res = 1;
	
	x = x % mod;
	
	if(x==0) return 0;
	while(y){
		if(y&1){
			res = ( (res%mod) * (x%mod) ) % mod;
		}
		
		y>>=1;
		x = ( (x%mod) * (x%mod) )%mod;
		
	}
	return res;
}

void prime(ll n){
	ll i,j;
	
	for(i=2;i<n;i++){
		if(factor[i]==0){
			factor[i] = i;
			for(j=2;i*j < n;j++){
				factor[i*j] = i ;
			}
		}
	}
}


int main(){

	prime(1000009);
	
	ll n,k,m,t;
	cin>>t;
	while(t--){
		ll result=1;
		cin>>n>>m>>k;
		ll i,j,value;
		map <ll,ll> ans;
		
		for(i=0;i<n;i++){
			cin>>value;	
			map<ll,ll> data;
		
			while(value>1){
				int him;
				him = factor[value];
				data[him]++;
				value/=him;
				
			}
			map<ll,ll>::iterator it;
			
			for(it = data.begin();it!=data.end();it++){
					ans[it->first] = max(it->second,ans[it->first]);
			}
			
			
			
		}
		map<ll,ll>::iterator it;
		for(it=ans.begin();it!=ans.end();it++){
				result = ( result * power(it->first , it->second * k, m )  )%m;
			}
			
		cout<<result<<endl;
		
		
	}
}
