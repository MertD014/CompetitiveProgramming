#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	cin>>n;
	while(n--){
		cin>>s;
		if(s.length()%2) cout<<"NO"<<endl;
		else{
			bool flag=true;
			for(int i=0;i<s.length()/2;i++){
				if(s[i]!=s[i+(s.length()/2)]) flag=false;
			}
			cout<<(flag?"YES":"NO")<<endl;
		}
	}
	return 0;
}
