#include <bits/stdc++.h>
using namespace std;
typedef struct node{int value;struct node *next;}node;
void delete_the_node(node *start)
{
	
	node *temp=NULL;
	temp=start->next;
	while(temp!=NULL)
	{
		start->value=temp->value;
		
		if(temp->next==NULL)
		{
			start->next=NULL;
			free(temp);
			return;
		}
		else
		{
			start=start->next;
			temp=temp->next;
		}
	}
	
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
		cin>>k;//element to be deleted
		
		temp=root;
		while(temp!=NULL)
		{
			if(temp->value==k)
			{
				delete_the_node(temp);
				break;
			}
			temp=temp->next;
		}
		
		temp=root;
		while(temp!=NULL)
		{
			cout<<temp->value<<" ";
			temp=temp->next;
		}
		cout<<endl;
		
		
		
}

