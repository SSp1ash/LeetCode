#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
stack<char> r;
class Solution {
public:
    bool isValid(string s) {
    	int size=s.size();
    	if(size==0){
    		return true;
		}
    	for(int i=0;i<size;i++){
    		if(!r.empty()){
    			if((s[i]+0==r.top()+1)||(s[i]+0==r.top()+2)){
    			r.pop();
    			continue;
				}
			}
    		r.push(s[i]);
		}
		if(r.empty()){
			return true;
		}else{
			return false;
		}
		
    }
};
int main(){
	string x;
	x="()[]{}";
	Solution r;
	cout<<r.isValid(x);
}
