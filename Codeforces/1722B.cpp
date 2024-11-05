#include <bits/stdc++.h>
using namespace std;

int t,x;
string s,ss;

int main(){
    cin>>t;
    while(t--){
        cin>>x;
        cin>>s>>ss;
        bool isSame=true;
        for(int i=0;i<x;i++){
        	if((s[i]=='R' && ss[i]!='R')||(s[i]!='R' && ss[i]=='R')){
        		isSame=false;
        		break;
			}
		}
		cout<<(isSame?"YES":"NO")<<endl;
    }
    return 0;
}
