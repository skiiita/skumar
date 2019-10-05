// program for numbers of prime factors a number in range from 1 to n
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,i,j;
	cin>>n;
	int ip[n];
	for(i=0;i<=n;i++){
		ip[i]=0;
	}
	for(i=2;i<=n;i++){
		if(ip[i]==0){
			for(j=1;j*i<=n;j++){
				ip[i*j]++;
			}
		}
	}
	int x;
	cin>>x;
	cout<<ip[x];
	return 0;
}