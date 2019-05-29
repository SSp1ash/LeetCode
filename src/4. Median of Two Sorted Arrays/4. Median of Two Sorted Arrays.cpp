#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num;
        int i=0;
        int j=0;
        while(i<nums1.size()||j<nums2.size()){
        	if(i==nums1.size()){
        		for(int q=j;q<nums2.size();q++){
        			num.push_back(nums2[q]);
				}
				break;
			}
        	
        	if(j==nums2.size()){
        		for(int q=i;q<nums1.size();q++){
        			num.push_back(nums1[q]);
				}
				break;
			}
        	
        	if(nums1[i]==nums2[j]){
        		num.push_back(nums1[i]);
        		num.push_back(nums2[j]);
        		i++;
        		j++;
        		continue;
			}
			if(nums1[i]>nums2[j]){
				num.push_back(nums2[j]);
				j++;
				continue;
			}
			if(nums1[i]<nums2[j]){
				num.push_back(nums1[i]);
				i++;
				continue;
			}
			
    }
     if(num.size()%2==0){
     	return (num[num.size()/2-1]+num[num.size()/2])/2.0;
	 }else{
	 	return num[num.size()/2];
	 }
     
 }
};
int main(){
		vector<int> a(2,10);
		vector<int> b(1,9);
		Solution c;
		cout<<c.findMedianSortedArrays(a,b)<<endl;
		return 0;
		
}
