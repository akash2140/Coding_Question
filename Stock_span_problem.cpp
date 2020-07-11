#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i,counter;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n],ans[n];
		
		for(i=0;i<n;i++)
			cin>>arr[i];
		
		ans[0] = 0;
		
		for(i=1;i<n;i++){
			counter = i-1;
			while(arr[i] >= arr[counter] && counter > 0){
				counter = ans[counter];
			}
			if( counter == 0 && arr[i] >= arr[counter] )
			ans[i] = -1;
			else
			ans[i] = counter;
		}
		
		cout<<1<<" ";
		for(i=1;i<n;i++){
				cout<<i - ans[i]<<" ";
		
		}
		cout<<endl;
	}
}
