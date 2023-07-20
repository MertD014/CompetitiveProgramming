#include <bits/stdc++.h>
using namespace std;
int a,b;
int main(){
	cin>>a>>b;
	a=max(a,b);
	a=6-a;
	a++;
	b=6;
	int x=__gcd(a,b);
	a/=x;
	b/=x;
	cout<<a<<"/"<<b;
	return 0;
}

