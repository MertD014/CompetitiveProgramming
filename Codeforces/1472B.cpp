#include <bits/stdc++.h>
using namespace std;
int t,n,x,one,two;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		one=two=0;
		while(n--){
			cin>>x;
			if(x==1) one++;
			else two++;
		}
		if((two*2+one)%2) cout<<"NO\n";
		else if(one || two%2==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}


