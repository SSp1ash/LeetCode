#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    	vector<vector<int>> result;
    	if(nums.size()<4){
    		return result;
		}
    	
        sort(nums.begin(),nums.end());
       
         for(int j=0;j<nums.size()-3;j++){
         	if(j>0 and nums[j-1]==nums[j]) continue;
         	for(int i=j+1;i<nums.size()-2;i++){
         		if(i>j+1 and nums[i-1]==nums[i]) continue;
         			int p=i+1;
         			int q=nums.size()-1;
         			
         			while(p<q){
         				int sum=target-nums[i]-nums[j];
         				if(nums[p]+nums[q]<sum){
						 	p++;
						 	continue;
						 }
						 if(nums[p]+nums[q]>sum){
						 	q--;
						 	continue;
						 }
         				if(nums[p]+nums[q]==sum){
         					vector<int> add={nums[j],nums[i],nums[p],nums[q]};
         					result.push_back(add);
         					while(p<q&&nums[p]==nums[p+1]){
         						p++;
							 }
							while(p<q&&nums[q]==nums[q-1]){
								q--;
							}
							p++;
							q--;
						 }
						 
						 
					 }
			 }
		 }
		 return result;
    }
};
int main(){
	vector<int>nums={-3,-1,0,2,4,5};
	int target=1;
	Solution x;
	auto a=x.fourSum(nums,target);
	cout<<a.size()<<endl;
	for(vector<vector<int>>::iterator it=a.begin();it!=a.end();it++){
		for(int i=0;i<4;i++){
			cout<<(*it)[i];
		}
		cout<<endl;
	}
}
