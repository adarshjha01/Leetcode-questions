class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == nullptr) {
            delete head;
            return nullptr;
        }

        ListNode* temp = head;
        int count = 0;
        while (temp) {
            count++;
            temp = temp->next;
        }

        temp = head;
        count -= n;
        if (count == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int newCount = 0;
        while (temp) {
            newCount++;
            if (count == newCount) break;
            temp = temp->next;
        }

        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;

        return head;
    }
};