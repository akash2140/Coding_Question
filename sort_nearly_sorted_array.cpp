#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
	int t,n,k,i;
	
	cin>>t;
	while(t--){
		priority_queue<int,vector<int>,greater<int> > data;
		cin>>n>>k;
		ll arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		if(k==n)
		k--;
		
		for(i=0;i<=k;i++){
			data.push(arr[i]);
		}
		
		k=0;
		while(!data.empty() && i<n){
			arr[k++]=data.top();
			data.pop();
			data.push(arr[i++]);
		}
		while(!data.empty()){
			arr[k++]=data.top();
			data.pop();
		}
		for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
