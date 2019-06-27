#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        recursion("",ans,0,0,n);
        return ans;
    }
    
    void recursion(string prefix,vector<string> &ans,int left,int right,int n){
    	if(prefix.length()==n*2){
    		ans.push_back(prefix);
    		return;
		}
		if(left<n){
			recursion(prefix+'(',ans,left+1,right,n);
		}
		if(right<left){
    		recursion(prefix+')',ans,left,right+1,n);
		}
	}
};
int main(){
	Solution x;
	auto r=x.generateParenthesis(3);
	for(auto it=r.begin();it!=r.end();it++){
		cout<<*it;
	}
}
