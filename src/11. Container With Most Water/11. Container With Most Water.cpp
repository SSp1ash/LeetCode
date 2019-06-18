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
	int x[7]={1,2,4,3};
	height.clear();
	height.insert(height.begin(),x,x+4);
	Solution a;
	cout<<a.maxArea(height);
	
}
