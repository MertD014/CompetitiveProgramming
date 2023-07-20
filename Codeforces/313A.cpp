#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	if(n>0) cout<<n;
	else{
		n=-n;
		int l=n%10;
		int ll=(n/10)%10;
		if(ll<l) cout<<-1*n/10;
		else cout<<-1*(n/10-ll+l);
	}
	return 0;
}


