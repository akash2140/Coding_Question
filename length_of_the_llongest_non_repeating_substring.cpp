#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	string data;
	cin>>t;
	while(t--){
		cin>>data;
		
		int start=0,end=0,n,ans=1,current=1;
		n=data.length();
		int arr[26]={0};
		
		while(end < n ){
			if(arr[data[end] -97]){
				start++;
				arr[data[start-1]-97]=0;
				current--;
			}
			else{
				arr[data[end] - 97] = 1;
				end++;
				current++;
				if(current >  ans){
					ans=current;
				}
			}
		}
		cout<<ans-1<<endl;
		
	}
}
