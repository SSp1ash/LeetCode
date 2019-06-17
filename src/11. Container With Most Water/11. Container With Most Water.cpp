#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
        	water=max(water,(j-i)*min(height[i],height[j]));
        	int a=height[i];
        	int b=height[j];
        	if(a<b){
        		i=i+1;
			}else{
				j=j-1;
			}
		}
		return water;
        
    }
};
int main(){
	vector<int> height;
	height.push_back(1);
	height.push_back(2);
	height.push_back(4);
	height.push_back(3);
	Solution a;
	cout<<a.maxArea(height);
	
}
