#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256,0);
        int res=0;
        int left=0;
        for(int i=0;i<s.size();i++){
        	if(m[s[i]]==0||m[s[i]]<left){
        		res=max(res,i-left+1);
			}else{
				left=m[s[i]];
			}
			m[s[i]]=i+1;
		}
		return res;
    }
    
};
int main(){
	string a;
	Solution b;
	cin>>a;
	cout<<b.lengthOfLongestSubstring(a)<<endl;
}

