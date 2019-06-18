#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
    	int a=num/1000;
        int b=num/100-a*10;
        int c=num/10-a*100-b*10;
        int d=num-a*1000-b*100-c*10;
        
        string x;
        for(int i=0;i<a;i++){
        	x.push_back('M');
		}
		if(b>=0&&b<4){
			for(int i=0;i<b;i++){
				x.push_back('C');
			}
		}
		if(b==4){
			x.append("CD");
		}
		if(b>4&&b<9){
			int t=b-5;
			x.push_back('D');
			for(int i=0;i<t;i++){
				x.push_back('C');
			}
		}
		if(b==9){
			x.append("CM");
		}
		
		
		if(c>=0&&c<4){
			for(int i=0;i<c;i++){
				x.push_back('X');
			}
		}
		if(c==4){
			x.append("XL");
		}
		if(c>4&&c<9){
			int t=c-5;
			x.push_back('L');
			for(int i=0;i<t;i++){
				x.push_back('X');
			}
		}
		if(c==9){
			x.append("XC");
		}
		
		
		if(d>=0&&d<4){
			for(int i=0;i<d;i++){
				x.push_back('I');
			}
		}
		if(d==4){
			x.append("IV");
		}
		if(d>4&&d<9){
			int t=d-5;
			x.push_back('V');
			for(int i=0;i<t;i++){
				x.push_back('I');
			}
		}
		if(d==9){
			x.append("IX");
		}
        
        return x;
    }
};
int main(){
	Solution a;
	cout<<a.intToRoman(3211);
}
