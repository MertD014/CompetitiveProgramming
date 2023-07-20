#include <bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		if(n==1) cout<<"2"<<endl;
		else cout<<(n/3+((n%3)?1:0))<<endl;
		
	}
	return 0;
}
