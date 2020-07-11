#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(ll value){
    ll root = sqrt(value);
    if(value <=3)
    return false;
    
    //if perfect square then retuen true
    if(value == root * root){
        return true;
    }
    
    // number is even
    while( (value & 1 ) == 0){
        value>>=1;
    }
    if(value == 0){
        return true;
    }
    
    
    ll x=3;
    //cout<<value;
    root = sqrt(value);
    for(;x <= root;){
        int count=0;
        while(value%x==0){
            value/=x;
            count++;
        }
        if(value == 1){
           // cout<<count<<endl;
            return count > 1 ;
        }
        root = sqrt(value);
        
        x+=2;
    }
    return false;
}
int main()
{
	ll n,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    (solve(n))?cout<<"YES\n" : cout<<"NO\n" ;
	}
	return 0;
}
