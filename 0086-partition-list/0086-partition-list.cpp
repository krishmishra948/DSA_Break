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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return NULL;
        vector<int> v;
        ListNode*curr=head;
        while(curr!=NULL){
            if(curr->val < x){
                v.push_back(curr->val);
            }
                curr=curr->next;
            }
                // Then put the value >= x
                curr=head;
                while(curr!=NULL){
                    if(curr->val >= x){
                        v.push_back(curr->val);
                    }
                        curr=curr->next;
                    }
                        // put the values back into Linked List
                        curr=head;
                        int idx=0;
                        while(curr!=NULL){
                            curr->val= v[idx++];
                            curr=curr->next;

                        }

    return head;
            
    }
};