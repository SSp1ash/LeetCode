#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector< vector<int> > threeSum(vector<int>& nums) {
    	vector<vector<int> > result;
    	if(nums.size()<3){
    		return result;
		}
    	sort(nums.begin(),nums.end());
    	for(int i=0;i<nums.size()-2;i++){
    		if(i>0&&nums[i-1]==nums[i]){
    			continue;
			}
    		int sum=0-nums[i];
    		int p=i+1;
    		int q=nums.size()-1;
    		while(p<q){
    			if(p-i>1&&nums[p]==nums[p-1]){
					p++;
					continue;
				}
				if(nums.size()-q>1&&nums[q]==nums[q+1]){
					q--;
					continue;
				}
    			if(nums[p]+nums[q]==sum){
    				vector<int> add;
    				add.push_back(nums[i]);
    				add.push_back(nums[p]);
    				add.push_back(nums[q]);
    				result.push_back(add);
    				p++;
    				q--;
    				continue;
				}
				if(nums[p]+nums[q]<sum){
					p++;
					continue;
				}
				if(nums[p]+nums[q]>sum){
					q--;
					continue;
				}
			}
		}
		return result;
		
    }
};
int main(){
	int r[10]={-4,-1,2,-1,-5,2,-4,-1,2,0};
	vector<int> a(r,r+10);
	Solution x;
	cout<<x.threeSum(a).size();
	
}
