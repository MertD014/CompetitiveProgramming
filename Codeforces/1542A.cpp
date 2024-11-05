#include <bits/stdc++.h>
using namespace std;

int t,n,x;

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        int d[2]={0};
        for(int i=0;i<2*n;i++){
        	cin>>x;
        	d[x%2]++;	
		}
		cout<<((d[0]-d[1])?"NO":"YES")<<endl; 
    }
    return 0;
}
