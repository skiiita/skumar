// program for highest prime factors for a number in range from 1 to n
#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n,i,j;
	cin>>n;
	int lp[n];
	for(i=0;i<=n;i++){
		lp[i]=1;
	}
	for(i=2;i<=n;i++){
		if(lp[i]==1){
			for(j=2;j*i<=n;j++){
				
					lp[i*j]=i;
				
			}
		}
	}
	int x;
	cin>>x;
	cout<<"highest prime factor of "<<x<<" is:"<<' ';
	if(lp[x]==1){
		cout<<x;
	} else{
		cout<<lp[x];
	}
	
	return 0;
}