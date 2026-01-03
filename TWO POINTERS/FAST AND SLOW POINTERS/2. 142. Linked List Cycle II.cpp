/*

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        // step 1: checking for empty linked list
        if(head == nullptr || head -> next == nullptr) {
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // step 2: checking for a loop cycle
        while(slow != nullptr && fast != nullptr) {

            fast = fast -> next;
            if(fast != nullptr) {
                fast = fast -> next;
            }

            slow = slow -> next;

            // step 3: checking condition for occurance of loop cycle
            if(slow == fast) {
                // Step 4: Find the starting node of the cycle
                slow = head;
                while(slow != fast) {
                    slow = slow -> next;
                    fast = fast -> next;
                }

                return slow;  // start of the cycle
            }
        }

        return nullptr;
    }
};

*/