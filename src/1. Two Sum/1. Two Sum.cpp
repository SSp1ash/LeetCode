#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	 map<int,int> num;
        for(int i=0;i<nums.size();i++){
        	num[nums[i]]=i;
		}
		for(int i=0;i<nums.size();i++){
			int compare=target-nums[i];
			map<int,int>::iterator p;
			p=num.find(compare);
			if(p==num.end()){
				continue;
			}else if(p->second!=i){
				vector<int> x;
				x.push_back(i);
				x.push_back(p->second);
				return x;
			}
			
		}
		
		return {};
		
    }
};
int main(){
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(3);
	
	
	Solution a;
	cout<<(a.twoSum(nums,6))[1];
}
