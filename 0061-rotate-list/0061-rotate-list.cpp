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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k<=0)
            return head;
        vector<ListNode*>node;
        while(head)
            node.push_back(head),head=head->next;
        int ll=node.size();
        k=k%ll;
        if(k==0)
            return node[0];
        node[ll-k-1]->next=nullptr;
        node[ll-1]->next=node[0];
        
        return node[ll-k];
    }
};