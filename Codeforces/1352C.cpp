#include <bits/stdc++.h>
using namespace std;
 
long long int t,n,k;
 
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<(int)(ceil((float)(k*n)/(n-1))-1)<<endl;
	}
	return 0;
}
 
/*
#include <bits/stdc++.h>
using namespace std;
 
int t,n,k;
 
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		int m,l=0,u=INT_MAX;
		while(u>l){
			m=(u+l)/2;
			if((m-m/n)<k) l=m;
			else if((m-m/n)>k) u=m;
			else break;
		}
		cout<<m<<endl;
	}
	return 0;
}
https://codeforces.com/problemset/problem/1352/C
*/
