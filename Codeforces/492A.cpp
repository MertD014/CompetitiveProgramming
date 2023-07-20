#include<bits/stdc++.h>
using namespace std;
int n;

int f(int x){
	if(x==1) return 1;
	return f(x-1)+x;
}

int ff(int x){
	if(x==1) return f(1);
	return ff(x-1)+f(x);
}

int main(){
	cin>>n;
	int x=1;
	while(ff(x++)<=n);
	cout<<x-2;
	return 0;
}
/*
1	1
3	4
6	10
10	20
15	35
21	56

*/
