#include <bits/stdc++.h>
using namespace std;

int t;
string s;


int main(){
	cin>>t;
	while(t--){
		cin>>s;
		if(s[0]+s[1]+s[2]+s[3]+s[4]-'A'*5>2){
			cout<<"B"<<endl;
		}
		else cout<<"A"<<endl;
	}
	return 0;
}
