class Solution {
public:

    ListNode* findNthNode(ListNode* temp, int k) {

        int cnt = 1;

        while (temp != NULL) {

            if (cnt == k)
                return temp;

            cnt++;
            temp = temp->next;
        }

        return temp;
    }


    ListNode* rotate(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0)
            return head;

        ListNode* tail = head;

        int len = 1;

        while (tail->next != NULL) {
            tail = tail->next;
            len++;
        }

        k = k % len;

        if (k == 0)
            return head;

        // Attach tail to head
        tail->next = head;

        // Find new last node
        ListNode* newLastNode = findNthNode(head, len - k);

        // New head
        head = newLastNode->next;

        // Break the circle
        newLastNode->next = NULL;

        return head;
    }


    ListNode* rotateRight(ListNode* head, int k) {

        return rotate(head, k);
    }
};