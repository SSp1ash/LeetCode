#include<iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){
	}
	
};
class Solution{
	public:
		ListNode* addTwoNumber(ListNode* l1,ListNode* l2){
			ListNode *head=new ListNode(-1);
			ListNode *p=head;
			int carry=0;
			int x,y,sum;
			while(l1!=NULL||l2!=NULL||carry!=0){
				x=(l1!=NULL)?l1->val:0;
				y=(l2!=NULL)?l2->val:0;
				sum=x+y+carry;
				carry=sum/10;
				p->next=new ListNode(sum%10);
				p=p->next;
				l1=l1!=NULL?l1->next:NULL;
				l2=l2!=NULL?l2->next:NULL;
			}
			return head->next;
			
			
			
			
		}
		
		void displayList(ListNode *l){
			while(l!=NULL){
				cout<<l->val;
				l=l->next;
			}
			cout<<endl;
		}
		
		ListNode* create(ListNode* &head){
			int a=0;
			int flag=1;
			ListNode *p;
			while(a>=0){
				cin>>a;
				if(a>=0&&flag==1){
					head=new ListNode(a);
					p=head;
					flag=0;
					continue;
				}
				if(a>=0&&p!=NULL){
					p->next=new ListNode(a);
					p=p->next;
					continue;
				}
				cout<<"over"<<endl;
				
			}
			return head;
			
		}
};
int main(){
	Solution a;
	ListNode *head1;
	ListNode *head2;
	a.create(head1);
	a.displayList(head1);
	a.create(head2);
	a.displayList(head2);
	a.displayList(a.addTwoNumber(head1,head2));
	
	

}
