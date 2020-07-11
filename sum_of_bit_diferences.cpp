#include<bits/stdc++.h>
using namespace std;
int count_bit(int *arr, int n, int shift){
	int i=0,ans=0,mask=1;
	mask<<=shift;
	
	for(;i<n;i++){
		if(arr[i]&mask)
			ans++;
	}
	return ans;
}
int main(){
	int n,t,i,ans=0,count;
	cin>>t;
	while(t--){
		ans=0;
		cin>>n;
		int arr[n];
		
		for(i=0;i<n;i++)
			cin>>arr[i];
	
		for(i=0;i<5;i++){
			count = count_bit(arr,n,i);
			//cout<<count<<endl;
			ans +=(count) * (n-count) * 2;
		}
		
		cout<<ans<<endl;
	}
}
