#include<iostream>
using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        if(str.length()==0){
        	return 0;
		}
		double result=0;
		int numstatus=0;
		int sign=1;
		
		for(int i=0;i<str.length();i++){
			
			
			
			if(str[i]>='0'&&str[i]<='9'){
				numstatus=1;
				result=result*10.0+(str[i]-'0');
				if(result>=0x7fffffff&&sign==1){
				
				return int(0x7fffffff);
			}
			
			
			if(result>=0x80000000&&sign==-1){
			
				return int(0x80000000);
			}
				continue;
			}
			
			if(numstatus==1&&str[i]<'0'||str[i]>'9'){
				return int(sign*result);
			}
			
			
			if(str[i]=='-'){
				numstatus=1;
				sign=-1;
				continue;
			}
			
			if(str[i]=='+'){
				numstatus=1;
				sign=1;
				continue;
			}
			
			
			if(str[i]==' '&&numstatus!=1){
				continue;
			}else{
				return int(result*sign);
			}
			
			
			
		}
		
		return int(result*sign);
		
    }
};
int main(){
	Solution a;
	string x="2147483648";
	cout<<a.myAtoi(x);
}
