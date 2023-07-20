#include<bits/stdc++.h>
using namespace std;

int t,n,x;

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int mm=INT_MIN,mn=INT_MAX;
		while(n--){
			cin>>x;
			if(x>mm) mm=x;
			if(x<mn) mn=x;
		}
		cout<<mm-mn<<endl;
	}
	return 0;
}

int fmax(int*a){
	
}
int fmin(int*a);
