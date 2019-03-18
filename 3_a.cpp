//Q:Program to tell if the input string  is permutation of a panildrome or not
#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	string str;
	char ch;
	int i,array[26]={0},odd_count=0,len;
	
	getline(cin,str,'\n');//to input space also between string

	len=str.length();
	for(i=0;i<str.length();i++)
	{

		ch=str[i];
		if(ch!=32)
		{
			ch=tolower(ch);
			array[ch-97]++;
			if(array[ch-97]%2==0)
				odd_count--;
			else
				odd_count++;

		}
	}
	
	if(odd_count<=1)
	{
		cout<<"TRUE\n";

	}
	else
	{
		cout<<"FALSE\n";
	}
}