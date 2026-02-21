/*

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        // Base case: If there are fewer than k nodes left, no need to reverse
        ListNode* temp = head;
        int cnt = 0;
        while (temp != nullptr && cnt < k) {
            temp = temp -> next;
            cnt++;
        }

        if (cnt < k) {
            return head;  // If there are fewer than k nodes left, return head as it is
        }

        // Step 1: Reverse the first 'k' nodes
        ListNode* prev = nullptr;
        ListNode* curr = nullptr;
        ListNode* forw = head;  // The head of the original group to be reversed
        cnt = 0;
        while (cnt < k) {
            curr = head -> next;
            head -> next = prev;
            prev = head;                  
            head = curr;
            cnt++;
        }

        // Step 2: Recurse for the next part of the list
        if (head != nullptr) {
            forw -> next = reverseKGroup(head, k);  // Connect the reversed part with the next part
        }

        // Step 3: Return the new head of the reversed list (which is prev)
        return prev;
    }
};

*/