#include<iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
      ListNode():val(0),next(NULL){}
  };
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    	if(head==NULL){
    		return NULL;
		}
        int size=1;
        ListNode *p;
        p=head;
        while(p->next!=NULL){
        	p=p->next;
        	size++;
		}
		if(size==1){
			return NULL;
		}
		p=head;
		int m=size-n+1;
		if(m==1){
			return head->next;
		}
		for(int i=1;i<m-1;i++){
			p=p->next;
		}
		p->next=p->next->next;
		return head;
    }
};
int main(){
	ListNode a,b,c,d,e;
	a.val=1;
	b.val=2;
	c.val=3;
	d.val=4;
	e.val=5;
	a.next=&b;
	b.next=&c;
	c.next=&d;
	d.next=&e;
	e.next=NULL;
	Solution x;
	x.removeNthFromEnd(&a,3);
}
