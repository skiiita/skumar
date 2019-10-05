#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &v,int x,int y)
{
    int temp;
    temp=v[x];
    v[x]=v[y];
    v[y]=temp;
}

int main() {
	vector<int> v;
	int n,i,l,r,num;
	cin>>n;
	for(i=0;i<n;i++){
	    cin>>num;
	    //cout<<num<<endl;
	    v.push_back(num);
	}
	l=0;r=n-1;
	while(l<r){
	    if(v[l]==0 && v[r]==1){
	        l++;
	        r--;
	    } else if(v[l]==0 && v[r]!=1){
	        l++;
	    } else if(v[l]!= 0 && v[r]==1){
	        r--;
	    } else if(v[l]!= 0 && v[r]!=1){
	        swap(v,l,r);
	       // cout<<v[l]<<v[r];
	        l++;
	        r--;
	    }
	}
	for(i=0;i<n;i++){
	    cout<<v[i];
	}
	return 0;
}