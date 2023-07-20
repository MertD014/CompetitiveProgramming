#include <bits/stdc++.h>
using namespace std;
int t,n;

long long int one(int x);
long long int getn(int x);

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long int res=0;
		for(int i=1;i<=getn(n);i++){
			for(int j=1;j<=9;j++){
				if(n>=j*(one(i))) res++;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

long long int one(int x){
	int r=0;
	for(int i=1;i<=x;i++) ++r*=10;
	return r/10;
}
long long int getn(int x){
	int r=0;
	while(x){
		x/=10;
		r++;
	}
	return r;
}
