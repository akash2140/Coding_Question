//Q:Program to 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string string1,string2;
	char ch;
	int i,j,length1,length2,mismatch=0;
	
	getline(cin,string1,'\n');//to input space also between string
	getline(cin,string2,'\n');
	
	length1=string1.length();
	length2=string2.length();
	
	if(length1==length2)
	{
		i=j=0;
		while(i<length1)
		{
			if(string1[i]!=string2[j])
			{
				mismatch++;
				
			}
			i++;
			j++;
		}
	}
	else if(abs(length1-length2)==1)
	{
		while(i<length1 && j<length2)
		{
			if(string1[i]!=string2[j])
			{
				if(length1>length2)
				{
					i++;
				}
				else
				{
					j++;
				}
			}
			else
			{
				i++;
				j++;
			}
		}
	}
	else
	{
		cout<<"FALSE\n";
		return 0;
	}
	if(mismatch<=1)
	cout<<"TRUE\n";
	else
	cout<<"FALSE\n";
}
