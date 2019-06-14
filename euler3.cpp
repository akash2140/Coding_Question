#include <bits/stdc++.h>
using namespace std;
vector<long long int> ans;
int isprime(long long int n) {
  long long int i = 2;
  long long int check = sqrt(n);

  for (; i <= check; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

void factor(long long int n) {
  long long int i, t;
  t = sqrt(n);
  //  cout<<t<<endl;
  for (i = 2; i <= t; i++) {
    if (n % i == 0 ) {
    if(isprime(i))
      ans.push_back(i);
      
      if(isprime(n / i))
        ans.push_back(n/i);
    }
  }
}
int main() {

  long longint n,t;
  cin>>t;
  while(t--){
  cin >> n;
  if(isprime(n) == 1)
  cout<<n<<endl;
  else{

    factor(n);
    sort(ans.begin(),ans.end());
    cout<<ans[ans.size()-1]<<endl;
    ans.clear();
  
  }
}
}