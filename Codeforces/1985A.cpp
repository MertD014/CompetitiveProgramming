#include <bits/stdc++.h>
using namespace std;

int t;
string a,b;

int main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		swap(a[0],b[0]);
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}
