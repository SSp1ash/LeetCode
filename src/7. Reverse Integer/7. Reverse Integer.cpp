#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int rev=0;
        int pop=0;
        while(x!=0){
        	pop=x%10;
        	x/=10;
        	if(rev>int(0x7fffffff)/10) return 0;
        	if(rev<int(0x80000000)/10) return 0;
        	rev=rev*10+pop;
		}
		return rev;
    }
};	
int main(){
	Solution a;
	int x;
	cin>>x;
	cout<<a.reverse(x);
}
