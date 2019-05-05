
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define swap(a,b) temp=a;a=b;b=temp;
void print_array(ll array[],ll n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

int partition(ll *array,ll l,ll r)
{
	ll pivot,i=l,j=l,temp;

	pivot=array[r];
	
	for(;i<r;i++)
	{
		if(array[i]<pivot)
		{
			swap(array[i],array[j]);
			
			j++;
		}
	}
	swap(array[r],array[j]);

	return j;
}

long long int find_median(ll *array,ll l,ll r,ll length)
{
	ll pos;
	
	pos=partition(array,l,r);
	//cout<<pos<<endl;
	if(pos == length/2)
	{
		return array[pos];
	}
	else
	{
		if(pos  > length/2)
		{
			r=pos-1;
		}
		else
		{
			l=pos+1;
		}
		return find_median(array,l,r,length);
			

	}


}
int main()
{
	ll n,i;
	cout<<"Enter the Size of array\n";
	cin>>n;

	ll array[n];
	cout<<"Enter the element\n";

	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}

	//partition();
	cout<<find_median(array,(ll)0,n-1,n)<<endl;
	//print_array(array,n);
}