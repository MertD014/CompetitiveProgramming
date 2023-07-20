#include <bits/stdc++.h>
using namespace std;
int t,w,h,n;
int main(){
	cin>>t;
	while(t--){
		cin>>w>>h>>n;
		int wn=0,hn=0;
		while(w%2==0){
			w/=2;
			wn++;
		}
		while(h%2==0){
			h/=2;
			hn++;
		}
		if(pow(2,wn+hn)>=n) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}


