#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    	string result="";
    	if(strs.size()==0){
    		return result;
		}
    	int j=0;
    	int i=0;
        while(j<strs[i].size()){
        	for(i=0;i<strs.size()-1;i++){
        		if(strs[i][j]==strs[i+1][j]){
        			continue;
				}else{
					return result;
				}
			}
			result+=strs[i][j];
			j++;
		}
		return result;
    }
};
int main(){
	string a="123";
	string b="";
	vector<string> x;
//	x.push_back(a);
//	x.push_back(b);
	Solution q;
	cout<<q.longestCommonPrefix(x);
}
