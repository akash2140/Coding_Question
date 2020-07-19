#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	string data;
	cin>>t;
	while(t--){
		cin>>data;
		n=data.length();
		int table[n][n];
		
		int i,j;
		
		for(i=0;i<n;i++){
			table[i][i] = data[i] - '0';
		}
		
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				table[i][j] = table[i][j-1] + data[j] - '0'; 
			}
		}
		
	
		int ans=-1,temp,a,b;
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				temp = j - i + 1;
				a=i+temp;
				b=j+temp;
				
				if(a < n && b < n && table[i][j] == table[a][b]){
					if(temp > ans){
				//	cout<<i<<" "<<j<<endl;;		
					ans=temp;
				}
				}
			}
		}
		cout<<2*ans<<endl;
	}
}
