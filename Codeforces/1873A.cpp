#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main(){
	cin>>t;
	while(t--){
		cin>>s;
		if(s[0]=='a' || s[1]=='b' || s[2]=='c') cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
