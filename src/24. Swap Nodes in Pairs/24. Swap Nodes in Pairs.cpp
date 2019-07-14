#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    	ListNode *none=new ListNode(0);
    	ListNode *point=none;
    	point->next=head;
    	ListNode *begin=point;
    	while(point->next!=NULL&&point->next->next!=NULL){
    		ListNode *swap1;
    		ListNode *swap2;
    		swap1=point->next;
    		swap2=swap1->next;
    		point->next=swap1->next;
    		swap1->next=swap2->next;
    		swap2->next=swap1;
    		point=swap1;
		}
		
		return begin->next;
    }
    
    ListNode* swapPairsRecursive(ListNode* head){
    	if(head==NULL||head->next==NULL){
    		return head;
		}
		ListNode *p=head->next;
		head->next=swapPairsRecursive(head->next->next);
		p->next=head;
		return p;
		
	}
};
int main(){
	
}
