#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b,int m) {
    if (b == 0)
        return 1;
    long long res =( binpow(a, b / 2, m))%m;
    if (b % 2)
        return ( (a*res)%m * res)%m;
    else
        return (res * res)%m;
}

int main() 
{
    int n,r,t,i;
	long long ans;
	int m =1000000007;
	scanf("%d",&t);
	long long fact[100000+1];
	fact[0]=1;
	for(i=1;i<=100000;i++){
		fact[i]=(fact[i-1]*i)%m;
	}
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    scanf("%d",&r);
	ans=(fact[n]);
	ans = ans * binpow(fact[n-r],m-2,m);
	ans = ans %m;
	ans= ans* binpow(fact[r],m-2,m);
	ans=ans%m;
	cout<<ans<<endl;
	}
	return 0;
}