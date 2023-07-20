#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x);
int n,m;

int main(){
	cin>>n>>m;
	if(isPrime(n) && isPrime(m)){
		for(int i=n+1;i<=m-1;i++){
			if(isPrime(i)){
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}

bool isPrime(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}
