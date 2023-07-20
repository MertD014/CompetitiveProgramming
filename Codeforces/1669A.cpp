#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<"Division ";
		if(n<1400) cout<<"4";
		else if(n<1600) cout<<"3";
		else if(n<1900) cout<<"2";
		else cout<<"1";
		cout<<endl;
	}
	return 0;
}
