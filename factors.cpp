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

void factor(int n){
    int i,t;
    t=sqrt(n);

    for(i=2;i<=t;i++){
        if(n%i==0 ){
            if(isprime(i))
            cout<<i<<"  ";
            if(isprime(n/i))
            cout<<n/i<<endl;
        }
    }
}
int main(){

    int n;
    cin>>n;

    factor(n);
}