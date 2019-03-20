//Q:Program to tell if the input string  is permutation of a panildrome or not[using bitset]
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	char ch;
	int i,len;
	
	getline(cin,str,'\n');//to input space also between string

	len=str.length();
	
	bitset<26> binary(0);//create a bitset having size of 26 bit and intialied to binary of zero
	
	for(i=0;i<len;i++)
	{
		ch=tolower(str[i]);
		binary[ch-97]=!binary[ch-97];//toggle bit each time if it get 1 at the end then it is even
	}
	
	if(binary.count()<=1) //binary.count() return the number of bit set
	{
		cout<<"True\n";
	}
	else
	{
		cout<<"False\n";
	}
		
}
