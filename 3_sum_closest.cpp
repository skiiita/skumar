#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        int p1,p2,l,i;
        l=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        long long int csum=INT_MAX;
        for(i=0;i<l-2;i++){
            p1=i+1;
            p2=l-1;
            while(p1<p2){
                sum=nums[i]+nums[p1]+nums[p2];
                if(abs(target-sum)<abs(target-csum)){
                    csum=sum;
                }
                if(target>sum){
                    p1++;
                } else{
                    p2--;
                }
            }
        }
        return csum;
    }

int main()
{
    vector<int> nums;
    int i,n,target,num;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        nums.push_back(num);
    }
    cin>>target;
    int out=threeSumClosest(nums, target);
    cout<<out;

}