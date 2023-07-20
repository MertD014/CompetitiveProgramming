#include <bits/stdc++.h>
using namespace std;
int t,n,k;

int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(n>k) cout<<"2"<<endl;
		else cout<<(k/n+((k%n)?1:0))<<endl;
	}
	return 0;
}

