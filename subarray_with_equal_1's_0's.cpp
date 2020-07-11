#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	while(t--){
		
		cin>>n;
		int arr[n],i,j;
		
		for(i=0;i<n;i++)
		{ cin>>arr[i];
			if(arr[i]==0)
			arr[i]=-1;
		}
		
		map<int,int> data;	
		
		int sum=0;
		for(i=0;i<n;i++){
			sum+=arr[i];
			data[sum]++;
			
		}
		int ans=0;
		map<int,int>::iterator itr;
		itr = data.begin();
		
		for(itr=data.begin();itr!=data.end();itr++){
				ans +=  ( (itr->second) * ( itr->second - 1 ) )/2;
		}
		
		if(data.find(0) != data.end()){
			ans+=data[0];
		}
		cout<<ans<<endl;
	}
}

