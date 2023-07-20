#include <bits/stdc++.h>
using namespace std;
int t,a,b,c,d;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
		if(max(a,b)>min(c,d) and min(a,b)<max(c,d)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
