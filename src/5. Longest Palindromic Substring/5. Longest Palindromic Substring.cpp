#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s){
    //###################最长公共子串解法####################### 采用了一位数组减少空间 
    /*if(s==""){
    	return s;
	}
    string contrary=s;
    reverse(contrary.begin(),contrary.end());
    int length=s.length();
    int maxLen=0;
    int maxEnd=0;
    int arr[length]={0};
   
    for(int j=0;j<length;j++){
    	for(int i=length-1;i>=0;i--){
    		if(contrary[j]==s[i]){
    			if(i==0||j==0){
    				arr[i]=1;
				}else{
					arr[i]=arr[i-1]+1;
				}
			}else{
				arr[i]=0;
			}
			
			if(arr[i]>maxLen){
			int beforeRev=length-j-1;
			if(beforeRev+arr[i]-1==i){
				maxLen=arr[i];
				maxEnd=i;
			}
		}
		
		}
		
		
	}
	
	return s.substr(maxEnd-maxLen+1,maxLen);*/
	
	
	
    
	}
};
int main(){
	string x="abcqqwasasasasaswee";
	Solution a;
	cout<<a.longestPalindrome(x);
	
}
