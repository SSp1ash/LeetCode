#include<iostream>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
    	int sum=0;
    	if(s.find("CM")<s.size()) sum-=200;
    	if(s.find("CD")<s.size()) sum-=200;
    	if(s.find("XC")<s.size()) sum-=20;
    	if(s.find("XL")<s.size()) sum-=20;
    	if(s.find("IX")<s.size()) sum-=2;
    	if(s.find("IV")<s.size()) sum-=2;
    	
    	for(int i=0;i<s.size();i++){
    		switch(s[i]){
    			case 'I': sum+=1;break;
    			case 'V': sum+=5;break;
    			case 'X': sum+=10;break;
    			case 'L': sum+=50;break;
    			case 'C': sum+=100;break;
    			case 'D': sum+=500;break;
    			case 'M': sum+=1000;break;
			}
		}
		return sum;
    }
};
int main(){
	Solution a;
	string x="MCMXCIV";
	cout<<a.romanToInt(x);
}
