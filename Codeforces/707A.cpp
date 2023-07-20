#include <bits/stdc++.h>
using namespace std;
int x,y;
string c;
int main(){
	cin>>x>>y;
	bool flag=false;
	for(int i=0;i<x*y;i++) {
		cin>>c;
		if(c=="C" || c=="M" || c=="Y") flag=true;
	}
	if(flag) cout<<"#Color";
	else cout<<"#Black&White";
	return 0;
}
