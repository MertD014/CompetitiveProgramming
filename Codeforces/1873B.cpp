#include <bits/stdc++.h>
using namespace std;

int t,n;


int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int d[n],p=1;
		for(int i=0;i<n;i++) cin>>d[i];
		sort(d,d+n);
		d[0]++;
		for(int i=0;i<n;i++) p*=d[i];
		cout<<p<<endl;	
	}
	return 0;
}
