#include <bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		if(n%4){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
			int d[n];
			for(int i=0;i<n/2;i++){
				cout<<2*(i+1)<<" ";
			}
			for(int i=0;i<n/2-1;i++){
				cout<<2*(i+1)-1<<" ";
			}
			cout<<2*(n/2)+n/2-1<<endl;
		}
	}
	
	return 0;
}
