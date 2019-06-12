#include<iostream>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
    	bool dp[s.size()+2][p.size()+2];
    	for(int i=0;i<s.size()+2;i++){
    		for(int j=0;j<p.size()+2;j++){
    			dp[i][j]=0;
			}
		}
		dp[s.size()][p.size()]=1;
		for(int i=s.size();i>=0;i--){
			for(int j=p.size();j>=0;j--){
				if(i==s.size()&&j==p.size()){
					continue;
				}
				
				bool first_match=(i<s.size()&&j<p.size()&&s[i]==p[j]||p[j]=='.');
				if(j+1<p.length()&&p[j+1]=='*'){
					dp[i][j]=dp[i][j+2]||first_match&&dp[i+1][j];
				}else{
					dp[i][j]=first_match&&dp[i+1][j+1];
				}
				
				 
			}
		}
		return dp[0][0];
     }
};
int main(){
	string a;
	string b;
    a="ab";
    b=".*";
	Solution x;
	cout<<x.isMatch(a,b);
	
}
