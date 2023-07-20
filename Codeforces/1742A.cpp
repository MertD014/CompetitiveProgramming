#include <bits/stdc++.h>
using namespace std;
int t,a,b,c;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(a+b==c || a+c==b || b+c==a) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
