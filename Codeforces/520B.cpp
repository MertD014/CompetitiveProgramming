#include <bits/stdc++.h>
using namespace std;

int x,y;
int d[10001];

int f(int x,int y){
    if(d[x]) return d[x];
    if(x>y || x<0) return 9999;
    if(x==y) return 0;
    return d[x] = 1+min(f(x-1,y),f(x*2,y));
}

int main() {
    cin>>x>>y;
    cout<<f(x,y);
    return 0;
}
