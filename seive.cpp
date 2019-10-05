// program to find prime nos. in range from 1 to n
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,i,j;
	cin>>n;
	int ip[n];
	for(i=0;i<=n;i++){
		ip[i]=1;
	}
	for(i=2;i<=n;i++){
		if(ip[i]==1){
			for(j=2;j*i<=n;j++){
				ip[j*i]=0;
			}
		}
	}
	int x;
	cin>>x;
	if(ip[x]==1){
		cout<<"prime";
	} else{
		cout<<"non prime";
	}
	return 0;
}