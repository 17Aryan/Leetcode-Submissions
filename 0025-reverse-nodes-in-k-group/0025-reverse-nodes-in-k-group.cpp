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
    int length(ListNode* head){
        int c=0;
        while(head){
            c++;
            head=head->next;
        }
        return c;
    }
    ListNode* sol(ListNode* head, int k,int size) {
        ListNode* prevptr=NULL;
        ListNode* currptr=head;
        ListNode* nextptr;
        
        int c=0;
        while(c<k&&currptr!=NULL){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
            c++;
        }
        size-=k;
        
        if(nextptr!=NULL && size>=k){
            head->next=reverseKGroup(nextptr,k);
        }
        else
            head->next=nextptr;
        return prevptr;
    }
    ListNode* reverseKGroup(ListNode* head,int k){
        return sol(head,k,length(head));}
};