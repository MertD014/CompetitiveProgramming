#include <bits/stdc++.h>
using namespace std;
int n,m,x,curr=1;
long long int t;
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>x;	
		if(curr<x) t+=(x-curr);
		else if(x<curr) t+=n-curr+x;
		curr=x;
	} 
	cout<<t;
	
	return 0;
} 
