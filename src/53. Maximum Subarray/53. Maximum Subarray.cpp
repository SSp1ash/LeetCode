#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> sum(nums.size());
        sum[0]=nums[0];
        int result=nums[0];
        for(int i=1;i<nums.size();++i){
        	sum[i]=max(sum[i-1]+nums[i],nums[i]);
        	result=max(result,sum[i]);
		}
		return result;
    }
};
int main(){
	vector<int> arr={-3,2,-1,4};
	Solution s;
	cout<<s.maxSubArray(arr)<<endl;
}
