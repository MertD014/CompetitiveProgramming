#include<bits/stdc++.h>
using namespace std;
int a,b,c,t;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		cout<<((((a+b+c)-min(a,min(b,c)))>9)?"YES":"NO")<<endl;
	}
	return 0;
}
