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
    ListNode*merge(ListNode*left,ListNode*right){
        if(left==NULL) return right;
        if(right==NULL) return left;
        ListNode*head;
        ListNode*tail;
        if(left->val<=right->val){
            head=left;
            left=left->next;

        }
        else{
            head=right;
            right=right->next;

        }
        tail=head;
        while(left!=NULL && right!=NULL){

            if (left->val <= right->val) {
                tail->next = left;
                left = left->next;
            }
            else {
                tail->next = right;
                right = right->next;
            }

            tail = tail->next;
        }

        if (left != NULL)
            tail->next = left;
        else
            tail->next = right;

        return head;
    }
     ListNode* sortList(ListNode* head) {

        if(head==NULL || head->next==NULL) return head;
            ListNode*slow=head;
            ListNode*fast=head;
            while(fast->next!=NULL && fast->next->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
            ListNode* right = slow->next;
                 slow->next = NULL;
                    ListNode* left = sortList(head);
                         right = sortList(right);
                    return merge(left, right);
    
        }
    };
    