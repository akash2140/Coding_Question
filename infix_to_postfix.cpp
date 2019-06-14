#include<bits/stdc++.h>
using namespace std;
int precedence(char ch){

    switch(ch){
        case '+':
        case '-':
        return 1;

        case '*':
        case '/':
        return 2;

        case '(':
        return INT_MIN;

    }
}
int main(){
    string str;
    stack <char> s;
    int i,len;

    cin>>str;
    len=str.length();

    for(i=0;i<len;i++){

        if(str[i]>=97 && str[i]<=122){
            cout<<str[i];
        }
        else{
            if(s.empty()==1){
                s.push(str[i]);
            }
     //changes start **********************
            else if(str[i]=='('){
                s.push(str[i]);
            }
 
            else if(str[i] == ')'){
                while(s.top()!='('){
                    cout<<s.top();
                    s.pop();
                }
                s.pop();
            }
   //changes stop ******************
           else{

                while((!s.empty()) && precedence(s.top())>=precedence(str[i])){
                    cout<<s.top();
                    s.pop();
                }
                s.push(str[i]);
            }
        }
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}