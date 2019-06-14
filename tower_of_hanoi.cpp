#include<bits/stdc++.h>
using namespace std;

void toi(int n,char s,char a,char d){
    if(n==0) return;

    toi(n-1,s,d,a);
    cout<<"move disk "<<n<<" to "<<s<<" -- "<<d<<endl;
    toi(n-1,a,s,d);
}
int main(){

    int n;
    cin>>n;

    toi(n,'S','A','D');
}