/*

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        // Base case: If there are fewer than 2 nodes left, no need to reverse
        ListNode* temp = head;
        int cnt = 0;
        while (temp != nullptr && cnt < 2) {
            temp = temp -> next;
            cnt++;
        }

        if (cnt < 2) {
            return head;  // If there are fewer than 2 nodes left, return head as it is
        }

        // Step 1: Reverse the first '2' nodes
        ListNode* prev = nullptr;
        ListNode* curr = nullptr;
        ListNode* forw = head;  // The head of the original group to be reversed
        cnt = 0;
        while (cnt < 2) {
            curr = head -> next;
            head -> next = prev;
            prev = head;                  
            head = curr;
            cnt++;
        }

        // Step 2: Recurse for the next part of the list
        if (head != nullptr) {
            forw -> next = swapPairs(head);  // Connect the reversed part with the next part
        }

        // Step 3: Return the new head of the reversed list (which is prev)
        return prev;
    }
};

*/