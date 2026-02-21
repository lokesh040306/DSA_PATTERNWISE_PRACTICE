/*

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        // TWO - POINTERS

        if(head == nullptr || head -> next == nullptr || k == 0) return head;

        // Step 1: Find the length
        int length = 0;
        ListNode* temp = head;
        while(temp != nullptr) {
            temp = temp -> next;
            length++;
        }

        // Step 2: Make k within bounds
        k = k % length;
        if(k == 0) return head;

        // Step 3: Use two pointers
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i = 0; i < k; i++) {
            fast = fast -> next;
        }

        // Move both until fast reaches the last node
        while(fast -> next != nullptr) {
            slow = slow -> next;
            fast = fast -> next;
        }

        // Step 4: Rotate
        ListNode* newHead = slow -> next;
        slow -> next = nullptr;
        fast -> next = head;

        return newHead;
    }
};

*/