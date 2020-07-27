#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t,n,i,value;
	cin>>t;
	while(t--){
		cin>>n;
		vector < pair<ll,ll> > data;
		ll visited[n] = {0};
		for(i=0;i<n;i++){
			cin>>value;
			data.push_back({value,i});
		}
		sort(data.begin(),data.end());
		ll ans = 0, count=0;
		
		for(i=0;i<n;i++){
			ll him;
			if(visited[i] == 0){
				count=0;
				visited[i]=1;
				him=data[i].second;
				while(him!=i){
					count++;
					visited[him] = 1;
					him = data[him].second;
				}
				ans+=count;
		}
		}
		
		cout<<ans/2<<endl;
	}
}
