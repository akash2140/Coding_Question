// C++ program to create a priority queue of pairs. 
// By default a max heap is created ordered 
// by first element of pair. 
#include <bits/stdc++.h> 

using namespace std; 
class cmp
{
public:
    	bool operator()(pair <int,int>  a,pair <int ,int > b){
  	if(a.first < b.first){
    	return true;
    }
  else if(a.first > b.first ){
  		return false;
  }
  else{
  	
    if(a.second < b.second){
    	return false;
    }
  	else if(a.second >= b.second ){
  		return true;
  }
  
  }
}
};


// Driver program to test methods of graph class 
int main() 
{ 
	// By default a max heap is created ordered 
	// by first element of pair. 
	priority_queue<pair<int, int> ,vector <pair <int,int> > , cmp> pq; 

	pq.push(make_pair(6, 3)); 
	pq.push(make_pair(6, 2)); 
	pq.push(make_pair(5, 1)); 

	pair<int, int> top = pq.top(); 
	cout << top.first << " " << top.second; 
	return 0; 
} 

