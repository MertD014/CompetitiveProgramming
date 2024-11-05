#include <bits/stdc++.h>
using namespace std;

int t,x,y;

int main(){
    cin>>t;
    while(t--){
        cin>>x;
        cout<<((x%3)?"First":"Second")<<endl;
    }
    return 0;
}
