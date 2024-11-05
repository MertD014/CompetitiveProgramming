#include <bits/stdc++.h>
using namespace std;

long long int t,n,k,x;

int main(){
	cin>>t;
	while(t--){
		
		long long int p=1;
		cin>>n>>k;
		
		for(int i=0;i<n;i++){
			cin>>x;
			p*=x;
		}
		
		if(2023%p) cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			cout<<2023/p;
			for(int j=0;j<k-1;j++) cout<<" 1";
			cout<<endl;
		}
		
	}
	
	return 0;
}
