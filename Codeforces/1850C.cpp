#include <bits/stdc++.h>
using namespace std;

int t;
string s;
queue<char> q;


int main(){
	cin>>t;
	while(t--){
		for(int j=0;j<8;j++){
			cin>>s;
			for(int i=0;i<s.size();i++)
				if(s[i]!='.') q.push(s[i]);
		}
		while(!q.empty()){
			cout<<q.front();
			q.pop();
		}
		
		cout<<endl;
	}
	return 0;
}
