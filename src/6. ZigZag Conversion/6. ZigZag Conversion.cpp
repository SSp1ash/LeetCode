#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
    	if(numRows==1){
    		return s;
		}
        vector<string> a(numRows);
        string result="";
        int curRow=0;
        bool fallback=false;
        for(int i=0;i<s.length();i++){
        	a[curRow]+=s[i];
        	if(curRow==0||curRow==numRows-1){
        		fallback=!fallback;
			}
			curRow+=fallback?1:-1;
		} 
		for(int i=0;i<numRows;i++){
			result+=a[i];
		}
		return result;
        
    }
};
int main(){
	Solution a;
	string x="abcdefgggg";
	cout<<a.convert(x,2);
}
