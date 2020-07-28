#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t,n,i,xor1,xor2,xor_temp,set_bit,tan1,tan2,deep1,deep2;
	cin>>t;
	while(t--){
		xor1=xor2=tan1=tan2=deep1=deep2=0;
		cin>>n;
		ll arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		
		for(i=0;i<n;i++){
			xor1^=arr[i];
			xor2^=(i+1);
		}
		
		xor_temp = xor1^xor2;
		set_bit = xor_temp & ~(xor_temp - 1);
		
		for(i=0;i<n;i++){
			if(arr[i]&set_bit)
				tan1^=arr[i];
			else
				tan2^=arr[i];
			
			if( (i+1) &set_bit)
				deep1^=(i+1);
			else
				deep2^=(i+1);
		}
		ll a=tan1^deep1;
		ll b= tan2^deep2;
		int flag=0;
		for(i=0;i<n;i++){
			if(a==arr[i]){
				flag=1;
				break;
			}
		}
		if(flag){
			cout<<a<<" "<<b<<endl;
		}
		else{
			cout<<b<<" "<<a<<endl;
		}
		
	
	
	}
}

