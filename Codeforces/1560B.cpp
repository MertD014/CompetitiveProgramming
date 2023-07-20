#include <bits/stdc++.h>
using namespace std;
int t,a,b,c;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		int size=abs(a-b)*2;
		if(a>size or 	b>size or c>size){
			cout<<"-1\n";
			continue;
		}
		if(c>(size/2)) cout<<c-(size/2)<<endl;
		else cout<<c+(size/2)<<endl;
	}
	return 0;
}
