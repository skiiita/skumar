//calculate pow(a,b) in O(logn) time
#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return ((res* res)%m * a)%m;
    else
        return (res* res)%m;
}

int main() {
	long long a,b,o;
	cin>>a;
	cin>>b;
	o=binpow(a,b);
	cout<<o;
	return 0;
}