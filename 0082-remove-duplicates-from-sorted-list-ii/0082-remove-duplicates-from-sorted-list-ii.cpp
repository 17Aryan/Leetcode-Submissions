/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode* d=new ListNode(0,head);
        ListNode* p=d,*q=head;
        int f=1;
        while(q && q->next){
            if(q->val==q->next->val){
                q=q->next;
                f=0;
            }
            else{
                if(f){
                    p=p->next;
                    q=q->next;
                }
                else{
                    p->next=q->next;
                    q=q->next;
                }
                f=1;
            }
        }
        if(f){
            p=p->next;
            q=q->next;
        }
        else{
            p->next=q->next;
            q=q->next;
        }
        return d->next;
    }
};