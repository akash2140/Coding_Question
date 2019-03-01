#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t,p1=-1,p2=-1,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int array[n];
		for(i=0;i<n;i++)
		{
			cin>>array[i];
			if(p1==-1 && array[i]%2==0)
			p1=i;
			
			if(p2==-1 && array[i]%2!=0)
			p2=i;
			
		}
		
		while(p2<n)
		{
			if(array[p1]%2==0&&array[p2]%2!=0)
			{
				if(p1 < p2)
				{
					swap(array[p1],array[p2]);
					p1++;
				}
			}
			p2++;
		}
		
		sort(array,array+p1, greater<int>());
		sort(array+p1,array+n);
		
		for(i=0;i<n;i++)
		cout<<array[i]<<" ";
		cout<<endl;
	}
	
}
