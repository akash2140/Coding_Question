//Program to sort a stack using only one extra stack
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> a,b;
    int minimum,c,value;
    int choice;
    while(1)
    {
        cout<<"enter the choice \n 1: Enter value in stack.\n 2. Sort the stack\n 3.Print stack\n";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cin>>value;
            a.push(value);
            break;
        case 2:
            {
                while(a.empty() ==0 )
                {
                    minimum=a.top();
                    a.pop();
                    if(b.size() == 0)
                    {
                        b.push(minimum);
                    }
                    else
                    {
                        c=0;
                        while(b.size() > 0 && b.top() > minimum)
                        {
                            c++;
                            a.push(b.top());
                            b.pop();

                        }
                        b.push(minimum);
                        while(c--)
                        {
                            b.push(a.top());
                            a.pop();
                        }
                    }
                }

                while(b.empty()==0)
                {
                    a.push(b.top());
                    b.pop();
                }

            }
            break;

        case 3:
            {
                cout<<a.size()<<endl;
                while(a.empty()==0)
                {
                    cout<<a.top()<<" ";
                    a.pop();
                }
                cout<<endl;
            }


        }
    }

}
