#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
private: 
	vector<string> KEY={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
public:
	//递归 
	vector<string> letterCombinations(string digits) {
		vector<string> result;
        if(digits.size()==0){
        	return result;
		}
		combination("",digits,0,result);
		return result;
    }
    
    void combination(string prefix,string digits,int offset,vector<string> &result){
    	if(offset==digits.size()){
    		result.push_back(prefix);
    		return;
		}
		string letters=KEY[digits[offset]-'0'];
		for(int i=0;i<letters.size();i++){
			combination(prefix+letters[i],digits,offset+1,result);
		}
	}
	
	
	
	/*采用自建算法 
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        for(int i=0;i<digits.size();i++){
        	result=mul(result,getList(digits[i]-'0'));
		}
		return result;
    }
    
    vector<string> getList(int digit){
    	string digitLetter[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    	vector<string> result;
    	for(int i=0;i<digitLetter[digit].length();i++){
    		result.push_back(digitLetter[digit].substr(i,1));
    	
		}
	
    	return result;
    	
	}
    
    vector<string> mul(vector<string> l1,vector<string> l2){
    	if(l1.size()!=0&&l2.size()==0){
    		return l1;
		}
		if(l1.size()==0&&l2.size()!=0){
			return l2;
		}
		vector<string> result;
		for(int i=0;i<l1.size();i++){
			for(int j=0;j<l2.size();j++){
				result.push_back(l1[i]+l2[j]);
			}
		}
		
		return result;
	}
	*/
	
	
	
};
int main(){
	Solution a;
	auto x=a.letterCombinations("22");
	for(int i=0;i<x.size();i++){
		cout<<x[i]<<endl;
	}


}
