#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
        	return false;
		}
		int rev=0;
		int a=x;
		int pop=0;
		while(x!=0){
			pop=x%10;
			if(rev>int(0x7fffffff)) return false;
			rev=rev*10+pop;
			x/=10;
		}
		if(rev==a){
			return true;
		}else{
			return false;
		}
    }
};
int main(){
	Solution a;
	cout<<a.isPalindrome(121);
}
