#include <bits/stdc++.h>
using namespace std;
typedef struct node{int value;struct node *next;}node;

node* sum(node *head1 , node *head2, int &c)
{
	node *him=NULL,*temp=NULL;
	int a;
	if(head1==NULL)
	{
		return NULL;
	}
	
	him=sum(head1->next,head2->next,c);
	
	a=head1->value + head2->value + c;
	c=a/10;
	
	temp=(node *)malloc(sizeof(node));
	temp->next=him;
	temp->value=a%10;
	him=temp;
	
	return him;
}

void run(node *root1, node *root2)
{
	int len1,len2,carry=0;
	node *temp,*tp,*ans;
	len1=len2=0;
	
	temp=root1;
	while(temp!=NULL)
	{
		len1++;
		temp=temp->next;
	}
	
	temp=root2;
	while(temp!=NULL)
	{
		len2++;
		temp=temp->next;
	}
	temp=NULL;
	if(len1>len2)
	{
		int a;
		a=len1-len2;
		
		while(a--)
		{
			if(temp==NULL)
			{
				temp=(node*)malloc(sizeof(node));
				temp->next=root2;
				temp->value=0;
					
			}
			else
			{
				tp=(node*)malloc(sizeof(node));
				tp->next=temp;
				tp->value=0;
				temp=tp;
			}
		}
		root2=temp;
		
	}
	else if(len2>len1)
	{
		int a;
		a=len2-len1;
		
		while(a--)
		{
			if(temp==NULL)
			{
				temp=(node*)malloc(sizeof(node));
				temp->next=root1;
				temp->value=0;
					
			}
			else
			{
				tp=(node*)malloc(sizeof(node));
				tp->next=temp;
				tp->value=0;
				temp=tp;
			}
		}
		root1=temp;
		
	}
	
	temp=root1;
	while(temp!=NULL)
	{
		cout<<temp->value<<" ";
		temp=temp->next;
	}
	cout<<endl;
	
	temp=root2;
	while(temp!=NULL)
	{
		cout<<temp->value<<" ";
		temp=temp->next;
	}
	cout<<endl;
	
	ans=sum(root1,root2,carry);
	
	if(carry!=0)
	{
				tp=(node*)malloc(sizeof(node));
				tp->next=ans;
				tp->value=carry;
				ans=tp;
	}
	
	while(ans!=NULL)
	{
		cout<<ans->value<<" ";
		ans=ans->next;
	}
	cout<<endl;
	
}
int main() {
	
		int n,i,k,pos=0;
		node *root1=NULL,*root2=NULL,*temp,*last;
		cout<<"Enter the number of digit in first number\n";
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			if(root1==NULL)
			{
				root1=(node *)malloc(sizeof(node));
				cin>>root1->value;
				root1->next=NULL;
				last=root1;
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
		
		cout<<"Enter the number of digit in second number\n";
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			if(root2==NULL)
			{
				root2=(node *)malloc(sizeof(node));
				cin>>root2->value;
				root2->next=NULL;
				last=root2;
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
		
		run(root1,root2);
		
		
}

