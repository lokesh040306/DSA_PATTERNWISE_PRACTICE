/*

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        // Two Pointers

        if(head == nullptr || head -> next == nullptr) return head;

        ListNode* first = head;
        ListNode* second = head;
        ListNode* temp = head;

        // Move temp k-1 steps
        for(int i = 1; i < k; i++) {
            temp = temp -> next;
        }

        first = temp;  // kth from start

        // Move temp to end, move second with it - kth from the end
        while(temp -> next) {
            temp = temp -> next;
            second = second -> next;
        }

        swap(first -> val, second -> val);

        return head;
    }
};

*/