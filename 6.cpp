#include <bits/stdc++.h>
using namespace std;
typedef struct node{int value;struct node *next;}node;
node *find_kth_from_last(node *root,int &pos,int k)
{
	node *temp=NULL;
	if(root==NULL)
	{
		pos=0;
		return NULL;
	}
	
	temp=find_kth_from_last(root->next,pos,k);
	pos++;
	if(pos==k)
	{
		return root;
	}
	else
	return temp;
	
}
int main() {
	
		int n,i,k,pos=0;
		node *root=NULL,*temp,*last;
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			if(root==NULL)
			{
				root=(node *)malloc(sizeof(node));
				cin>>root->value;
				root->next=NULL;
				last=root;
			}
			else
			{
				temp=(node *)malloc(sizeof(node));
				cin>>temp->value;
				temp->next=NULL;
				last->next=temp;
				last=temp;
			}
		}
		cin>>k;//kth from last
		
		temp=find_kth_from_last(root,pos,k);
		if(temp==NULL)
		cout<<-1<<endl;
		else
		cout<<temp->value<<endl;
		
		
}

