class Solution {
public:

    ListNode* getKthNode(ListNode* temp, int k) {

        k = k - 1;

        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }

        return temp;
    }


    ListNode* reverseLinkedList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* temp = head;

        while (temp != NULL) {

            ListNode* nextNode = temp->next;

            temp->next = prev;

            prev = temp;
            temp = nextNode;
        }

        return prev;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while (temp != NULL) {

            ListNode* kThNode = getKthNode(temp, k);


            if (kThNode == NULL) {

                if (prevLast != NULL) {
                    prevLast->next = temp;
                }

                break;
            }

    
            ListNode* nextNode = kThNode->next;
            kThNode->next = NULL;

            reverseLinkedList(temp);


            if (temp == head) {
                head = kThNode;
            }
            else {
                prevLast->next = kThNode;
            }

            prevLast = temp;

            
            temp = nextNode;
        }

        return head;
    }
};