#include <bits/stdc++.h>
using namespace std;
typedef struct store{int min,max;}store;
store solve(int array[],int left,int right){
    store data,a,b;
    if(left==right){
        data.min=array[left];
        data.max=array[left];
        return data;
    }
    
    if(left==right-1){
        if(array[left] < array[right]){
            data.min=array[left];
            data.max=array[right];
        }
        else{
            data.min=array[right];
            data.max=array[left];
        }
        return data;
    }
    
    int mid;
    mid = (left+right)/2;
    
    a = solve(array,left,mid);
    b = solve(array,mid+1,right);
    
    if(a.min < b.min){
        data.min=a.min;
    }
    else{
        data.min=b.min;
    }
    
    if(a.max > b.max){
        data.max=a.max;
    }
    else{
        data.max=b.max;
    }
    
    return data;
}
    


int main()
{
    int n,i;
    cin>>n;
    int array[n];
    store ans;
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    ans=solve(array,0,n-1);
    cout<<"MIN "<<ans.min<<"  "<<"MAX "<<ans.max<<endl;
}
