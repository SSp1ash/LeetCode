#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0x7fffffff;
        int count=0;
        for(int i=0;i<nums.size();i++){
        	
			if(nums[i]!=x){
        		x=nums[i];
        		count++;
			}
			else{
				
				nums.erase(nums.begin()+i);
				--i;
			}
		}
		return count;
    }
};
int main(){
	vector<int> nums={1,1,2};
	Solution a;
	cout<<a.removeDuplicates(nums);
	cout<<endl;
	for(auto it:nums){
		cout<<it;
	}
}
