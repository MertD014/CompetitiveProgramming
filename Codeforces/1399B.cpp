#include <bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],b[n];
		int mina=INT_MAX,minb=INT_MAX;
		long long int moves=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<mina) mina=a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
			if(b[i]<minb) minb=b[i];
		}
		for(int i=0;i<n;i++){
			int diffa=a[i]-mina;
			int diffb=b[i]-minb;
			moves+=(diffa+diffb-min(diffa,diffb));
		}
		cout<<moves<<endl;
	}
	return 0;
}
