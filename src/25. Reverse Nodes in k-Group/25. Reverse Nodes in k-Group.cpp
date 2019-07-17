#include<iostream>
struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *hh=new ListNode(0);
        hh->next=head;
        ListNode *r=hh;
        ListNode *begin=r;
        while(1){
        	ListNode *end=nnext(hh,k);
        	if(end){
        		ListNode *temp=end->next;
        		ListNode *r2=reverse(hh->next,temp);
        		ListNode *t1=hh->next;
        		hh->next=r2;
        		hh=t1;
        		if(r){
					r->next=r2;
        			r=NULL;
				}
			}else{
				return begin->next;
			}
		}
    }
    ListNode* nnext(ListNode* head,int n){
    	while(n--){
    		head=head->next;
    		if(head==NULL){
    			return NULL;
			}
		}
		return head;
	}
	ListNode* reverse(ListNode* head,ListNode *temp){
		if(head->next==temp){
			return head;
		}
		ListNode *p=reverse(head->next,temp);
		head->next->next=head;
		head->next=temp;
		
		return p;
	}
};
using namespace std;
int main(){
	ListNode a1(1); 
	ListNode a2(2); 
	ListNode a3(3);
	ListNode a4(4);
	ListNode a5(5);
	a1.next=&a2;
	a2.next=&a3;
	a3.next=&a4;
	a4.next=&a5;
	ListNode *q=NULL;
	Solution x;
	auto *p=x.reverseKGroup(&a1,2);
	while(p){
		cout<<p->val;
		p=p->next;
	}
}
