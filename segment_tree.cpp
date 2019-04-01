#include<bits/stdc++.h>
using namespace std;

void build(int array[], int tree[], int start, int end, int current	)
{
	int mid;
	if(start == end)
	{
		tree[current]=array[start];
		return;
	}
	mid=(start+end)/2;
	
	build(array,tree,start,mid,2*current);
	build(array,tree,mid+1,end,2*current + 1);
	
	tree[current]=tree[2*current] + tree[2*current + 1];
}

int query(int tree[],int start, int end, int range_left, int range_right, int current)
{
	int mid;
	if(range_right < start || range_left > end )
	{
		return 0;
	}
	if( ( range_left==start && range_right >= end ) || ( range_left<=start && range_right == end ) )
	{
		return tree[current];
	}
	
	mid = (start + end ) / 2;
	
	return (query(tree,start,mid,range_left,range_right,2 * current) +
	query(tree,mid+1,end,range_left,range_right,2* current + 1) );
	
}
int main()
{
	int i,range_left,range_right;
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int tree[21]={0};// Number of element in tree = 2*leaf_node - 1
	build(array,tree,0,9,1);// building tree
	
	while(1)
	{
		cin>>range_left>>range_right;
		cout<<query(tree,0,9,range_left-1,range_right-1,1);
	}
	for(i=1;i<=20;i++)
	{
		cout<<tree[i]<<" ";
	}
	cout<<endl;
}

