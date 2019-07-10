#include<iostream>
#include<vector>
using namespace std;
class ListNode{
public:	
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode head(0);
        ListNode *p=NULL;
        int size=lists.size();
        if(size==0){
        	return p;
		}
		int notempty=0;
		for(int i=0;i<size;i++){
			if(lists[i]!=NULL){
				notempty=1;
			}
		}
		if(notempty==0){
			return p;
		}
        p=&head;
        
        
        int flag;
        int set=0;
		int min=0x7fffffff;
		while(1){
			
			for(int i=0;i<size;i++){
				if(lists[i]!=NULL){
					if(lists[i]->val<min){
					min=lists[i]->val;
					flag=i;
					}
				}
				
			}
			if(set==size-1){
				p->next=lists[flag];
				break;
			}
			if(lists[flag]!=NULL){
				p->next=lists[flag];
				lists[flag]=lists[flag]->next;
				p=p->next;
			}
			if(lists[flag]==NULL){
				set++;
			}
			if(set==size){
				break;
			}
			min=0x7fffffff;
		}
		return head.next;
        
    }
};
int main(){
	vector<ListNode*> x;
	ListNode a1(1);
	ListNode a2(4);
	ListNode a3(5);
	a1.next=&a2;
	a2.next=&a3;
	
	ListNode b1(1);
	ListNode b2(3);
	ListNode b3(4);
	b1.next=&b2;
	b2.next=&b3;
	
	ListNode c1(2);
	ListNode c2(6);
	c1.next=&c2;
	
	x.push_back(&a1);
	x.push_back(&b1);
	x.push_back(&c1);
	
	Solution a;
	auto m=a.mergeKLists(x);
	while(m!=NULL){
		cout<<m->val;
		m=m->next;
	}
}
