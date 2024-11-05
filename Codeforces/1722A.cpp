#include <bits/stdc++.h>
using namespace std;
int t,n;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s;
		if(n==5){
			int t,i,m,u,r;
			t=i=m=u=r=0;
			for(int j=0;j<5;j++){
				if(s[j]=='T') t++;
				if(s[j]=='i') i++;
				if(s[j]=='m') m++;
				if(s[j]=='u') u++;
				if(s[j]=='r') r++;
			}
			if(t&&i&&m&&u&&r) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}
