#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.length();){
		if(s[i]=='.'){
			cout<<"0";
			i++;
		}
		else if(s[i+1]=='.'){
			cout<<"1";
			i++;
			i++;
		}
		else{
			cout<<"2";
			i++;
			i++;
		}
	}
	return 0;
}
//  

//  0202001
//	.  0
//	-. 1
//	-- 2
