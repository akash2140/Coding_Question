#include<bits/stdc++.h>
using namespace std;
void countDistinct(int array[], int k, int n)
{
 	int i,j,freq[101]={0},count=0;   
	count=i=j=0;
		while(j<k)
		{
			if(freq[array[j]]==0)
			count++;
			freq[array[j]]++;
			j++;
			
		}
		cout<<count<<" ";
		i++;
		while(j<n)
		{
			freq[array[i-1]]--;
			if(freq[array[i-1]] == 0)
			count--;
			
			if(freq[array[j]]==0)
			count++;
			freq[array[j	]]++;
			i++;
			j++;
			cout<<count<<" ";
		}
		
}
int main()
{
	int t,n,k,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int array[n];
		for(i=0;i<n;i++)
		{
			cin>>array[i];
		}
		
		countDistinct(array,k,n);
		cout<<endl;
		
		
	}
	
}
