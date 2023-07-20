#include <bits/stdc++.h>
using namespace std;
int t,a,b,c,d;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
		int r=0;
		if(b>a) r++;
		if(c>a) r++;
		if(d>a) r++;
		cout<<r<<endl;	
	}
	
}

