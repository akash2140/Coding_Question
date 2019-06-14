#include<bits/stdc++.h>
using namespace std;
int isprime(int n){
    int i=2;
    int check=sqrt(n);

    for(;i<=check;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
    
    int n;
    cin>>n;
    if(isprime(n))
    cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    

}