#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int sub=int(0x7fffffff);
        for(int i=0;i<nums.size()-1;i++){
        	int p=i+1;
        	int q=nums.size()-1;
        	while(p<q){
        		if(abs(nums[i]+nums[p]+nums[q]-target)<sub){
        			sum=nums[i]+nums[p]+nums[q];
        			sub=abs(sum-target);
				}
				if(nums[i]+nums[p]+nums[q]>target){
					q--;
				}else{
					p++;
				}
			}
		}
			return sum;
    }
};
int main(){
	int a[4]={-1,2,1,-4};
	int target=1;
	Solution x;
	vector<int> r(a,a+4);
	cout<<x.threeSumClosest(r,target);
}
