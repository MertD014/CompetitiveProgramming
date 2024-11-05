#include <bits/stdc++.h>
using namespace std;

int t,n,x;


int main(){
	cin>>t;
	while(t--){
		bool canDo=true;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x%2) canDo=!canDo;
		}
		cout<<(canDo?"YES":"NO")<<endl;
	}
	return 0;
}
