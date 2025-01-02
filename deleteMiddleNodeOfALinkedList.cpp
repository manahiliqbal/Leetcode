class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        int n = 0;
        ListNode* cur = head;
        while (cur != nullptr) {
            n++;
            cur = cur->next;
        }

        int mid = n / 2;

    
        ListNode* prev = nullptr;
        cur = head;
        for (int i = 0; i < mid; i++) {
            prev = cur;
            cur = cur->next;
        }

        if (prev != nullptr) {
            prev->next = cur->next;
        }

        return head;
    }
};
