#include<bits/stdc++.h>
using namespace std;

void merge(int array[], int left, int mid,int right){

    
    int temp[right - left + 1],i,j,k=0;
    i=left;
    j=mid+1;
    while(i<=mid && j <= right){
        if(array[i]<array[j]){
            temp[k++]=array[i];
            i++;
        }
        else{
            temp[k++]=array[j];
            j++;
        }int isprime(int n){
    int i=2;
    int check=sqrt(n);

    for(;i<=check;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


        
    }

    while(i<=mid){
        temp[k++]=array[i];
        i++;
    }
      while(j<=right){
        temp[k++]=array[j];
        j++;
    }
    k=0;
    for(i=left;i<=right;i++,k++){
        array[i]=temp[k];
    }

}
void mergesort(int array[],int left,int right){

    int mid;
    if(left< right){

        mid=(left+right)/2;

        mergesort(array,left,mid);
        mergesort(array,mid+1,right);
        merge(array,left,mid,right);
    }
}

int main(){

    int n,i;
    cin>>n;
    int array[n]; 

    for(i=0;i<n;i++){
        cin>>array[i];
    }
    mergesort(array,0,n-1);

    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}