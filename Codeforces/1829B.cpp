#include <bits/stdc++.h>
using namespace std;

int t,n,x;

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        int l=0,ml=0;
        for(int i=0;i<n;i++){
        	cin>>x;
        	if(x){
        		ml=max(ml,l);
        		l=0;
			}
			else{
				l++;
			}
		}
		ml=max(ml,l);
		cout<<ml<<endl;
    }
    return 0;
}
