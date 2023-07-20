#include <bits/stdc++.h>
using namespace std;
int t,n,x;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		if(n<3) cout<<"1"<<endl;
		else cout<<((n-2)/x)+((n-2)%x?2:1)<<endl;
	}
	return 0;
}
