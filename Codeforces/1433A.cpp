#include <bits/stdc++.h>
using namespace std;

long long int one(int x);
long long int getn(int x);
int f(int x);

int t,x;

int main(){
	cin>>t;	
	while(t--){
		cin>>x;
		for(int i=1;i<10;i++){
			if(x==i*one(getn(x))){
				cout<<10*(i-1)+((getn(x)*(getn(x)+1))/2)<<endl;
			}
		}
		
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

int f(int x){

}

/*
1 1
2 3
3 6
4 10

*/
