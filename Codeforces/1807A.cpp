#include <bits/stdc++.h>
using namespace std;
int t,a,b,c;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(c==(a+b)) cout<<"+";
		else cout<<"-";
		cout<<endl;
	}
	return 0;
}
