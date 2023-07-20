#include <bits/stdc++.h>
using namespace std;
int t,a,b,c,n;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>n;
		if((3*max(a,max(b,c))-a-b-c)>n) cout<<"NO\n";
		else if((a+b+c+n)%3) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}


