#include <bits/stdc++.h>
using namespace std;
int t,a,b,c;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		cout<<(a+b+c)-min(a,min(b,c))-max(a,max(b,c))<<endl;
	}
	return 0;
}
