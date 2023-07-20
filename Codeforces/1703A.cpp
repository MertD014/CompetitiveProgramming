#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		if((s[0]=='Y' || s[0]=='y') && (s[1]=='E' || s[1]=='e') && (s[2]=='S' || s[2]=='s')) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
