#include <bits/stdc++.h>
using namespace std;
int t,n,k;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		int i=0,j=n-1;
		while(k-- && i<n){
			if(a[i]<b[j]) a[i]=b[j];
			i++;
			j--;
		}
		int sum=0;
		for(int m=0;m<n;m++) sum+=a[m];
		cout<<sum<<endl;
	}
	return 0;
}


