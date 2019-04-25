#include<bits/stdc++.h>
#define FOR_HIM(a,b) for(a=0;a<b;a++)
#define ll long long int 
using namespace std;
int main()
{
	ll n,i,sum=0,max=0;
	cin>>n;

	ll array[n];
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}

	for(i=0;i<n;i++)
	{
		sum+=array[i];
		if(sum > max)
		{
			max=sum;
		}

		if(sum<0)
			sum=0;

	}
	cout<<max<<endl;
}