//find-union
//undirected and conncted graph

#include<bits/stdc++.h>
using namespace std;
void initialize(int array[],int n)
{
	for(int i=0;i<n;i++)
	array[i]=-1;
}

int find_(int a,int array[])
{
	while(array[a]>=0)
	{
		a=array[a];
	}
	
	return a;
}

int union_(int parent1,int parent2,int array[])
{

	if(array[parent1] < array[parent2])
		{
		
			array[parent2]=parent1;
			array[parent2]-=1;
			
		}
		else if(array[parent1] > array[parent2])
		{
		
			array[parent1]=parent2;
			array[parent1]-=1;
		}
		else
		{
			if(parent1<parent2)
			{
				array[parent2]=parent1;
				array[parent2]-=1;
			}
			else
			{
				array[parent1]=parent2;
				array[parent1]-=1;
			}
		}
}

int main()
{
	int no_of_vertex,edges,x,y,parent1,parent2,parent;	
	
	cout<<"enter number of vertices\n";
	cin>>no_of_vertex;
	
	int array[no_of_vertex];
	initialize(array,no_of_vertex);
	
	cout<<"enter number of edges\n";
	cin>>edges;
	
	while(edges--)
	{
		cin>>x>>y;
		
		parent1=find_(x,array);
		parent2=find_(y,array);
		
		
		
		if(parent1 != parent2)
		{
			
			union_(parent1,parent2,array);
		}
		else
		{
			cout<<"cycle formed\n";
			break;
		}
	}
}
