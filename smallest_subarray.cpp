#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,g,i,j;
	cin>>t;
	while(t--){
		cin>>g>>n;
		
		int arr[n],matrix[n][n];
		
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				matrix[i][j] = 0;
		
		
		for(i=0;i<n;i++)
			cin>>arr[i];
		
		for(i=0;i<n;i++){
			matrix[i][i] = arr[i];
		}
		
		for(i=0;i<n;i++){
			
			for(j=i+1;j<n;j++){
				matrix[i][j] = __gcd(matrix[i][j-1] , arr[j]);		
			}
		}
		int ans=INT_MAX,flag=1;
		
		for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			//cout<<matrix[i][j]<<"    ";
			}
			cout<<endl;
		}
			
		
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				if( matrix[i][j] == g){
					flag=0;
					//cout<<i<<" "<<j<<"\n";
					if( (j-i+1) < ans)
						ans = j - i + 1;		
				}
			}
			
		}
		if(flag)
		cout<<-1<<endl;
		else
		cout<<ans<<endl;	
	}
}
