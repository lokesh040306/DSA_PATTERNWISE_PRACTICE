/*

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        // In-place reversal

        if (head == nullptr || left == right) return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        int cnt = 1;
        
        // Step 1: Traverse the list until reaching the `left`-th node
        while (cnt < left) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        
        ListNode* connection = prev;  // connection node will be the node before left-th node
        ListNode* tail = curr;         // tail will be the left-th node before the reverse
        ListNode* forw = nullptr;

        // Step 2: Reverse the sublist from `left` to `right`
        while (cnt <= right) {
            forw = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forw;
            cnt++;
        }

        // Step 3: Reconnect the reversed part with the rest of the list
        if (connection != nullptr) {
            connection -> next = prev;  // Connect the node before left to the new head of the sublist
        } 
        else {
            head = prev;  // If `left == 1`, update the head of the list
        }

        // Connect the tail of the reversed sublist to the node after the right-th node
        tail -> next = curr;

        return head;
    }
};

*/