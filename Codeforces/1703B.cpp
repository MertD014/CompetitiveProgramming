#include <bits/stdc++.h>
using namespace std;

int t,n;
string s;

int main(){
	cin>>t;
	while(t--){
		int d[30]={0};
		int tot=0;
		cin>>n;
		cin>>s;
		for(int i=0;i<n;i++){
			d[s[i]-'A']++;
		}
		for(int i=0;i<30;i++){
			tot+=(d[i]?(d[i]+1):(0));
		}
		cout<<tot<<endl;
	}
	return 0;
}
