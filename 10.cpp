//Q: Implement a queue such that find_min() can be performed in o(1) time 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack <int> a,temp;
	int min = INT_MAX,choice,value,him;
	
	while(1)
	{
		cout<<"enter the choice\n";
		cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"Enter the Value\n";
		cin>>value;
		a.push(value);
		if(value<=min)
		{
			temp.push(value);
			min=value;
		}
		break;
		
		case 2:
			if(a.size()>0)
			{
				him=a.top();
				a.pop();
				{
					if(him == temp.top())
					temp.pop();
					min=temp.top();
				}
				
			}
			else if(a.size()==0)
				{
					temp.pop();
				}
		break;
		
		case 3:
			cout<<"MINIMUM :"<<temp.top()<<endl;
		break;
		
		case 4:
			return 0;
	}
	}
}
