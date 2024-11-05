#include <bits/stdc++.h>
using namespace std;

string s;
char curr='a';
int sum;

int main(){
	cin>>s;
	for(int i=0;i<s.length();curr=s[i++])
		sum+=min(abs((int)(s[i]-curr)),26-abs((int)(s[i]-curr)));
	cout<<sum;
    return 0;
}
