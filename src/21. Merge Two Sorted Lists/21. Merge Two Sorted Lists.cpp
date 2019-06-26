#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode result(0);
        ListNode *temp=&result;
        while(l1!=NULL&&l2!=NULL){
        	if(l1->val<l2->val){
        		temp->next=l1;
        		temp=temp->next;
        		l1=l1->next;
			}else{
				temp->next=l2;
        		temp=temp->next;
        		l2=l2->next;
			}
		}
		if(l1==NULL){
			temp->next=l2;
		}
		if(l2==NULL){
			temp->next=l1;
		}
		return result.next;
    }
    
    ListNode* mergeTwoListsRecursion(ListNode* l1, ListNode* l2) {
    	if(l1==NULL){
    		return l2;
		}
		if(l2==NULL){
			return l1;
		}
		if(l1->val<l2->val){
			l1->next=mergeTwoListsRecursion(l1->next,l2);
			return l1;
		}else{
			l2->next=mergeTwoListsRecursion(l2->next,l1);
			return l2;
		}
    }
};
int main(){
	ListNode a(1);
	ListNode b(2);
	ListNode c(3);
	a.next=&b;
	b.next=&c;
	
	ListNode x(2);
	ListNode y(3);	
	ListNode z(4);	
	x.next=&y;
	y.next=&z;
	Solution m;
//	ListNode *result=m.mergeTwoLists(&a,&x);
	ListNode *result=m.mergeTwoListsRecursion(&a,&x);
	while(result!=NULL){
		cout<<result->val;
		result=result->next;
	}
	
}
