#include <bits/stdc++.h>
using namespace std;

int t,n;
string s;


int main(){
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        int mx=0;
		for(int i=0;i<n;i++)
			mx=max(mx,(int)s[i]);
		cout<<mx-'a'+1<<endl;
    }
    return 0;
}
