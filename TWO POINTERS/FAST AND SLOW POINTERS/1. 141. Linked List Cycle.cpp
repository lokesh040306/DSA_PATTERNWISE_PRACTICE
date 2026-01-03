/*

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        // FLOYD'S CYCLE DETECTION ALGORITHM

        // step 1: checking for empty linked list
        if(head == nullptr || head -> next == nullptr) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        // step 2: checking for a loop cycle
        while(slow != nullptr && fast != nullptr) {

            fast = fast -> next;
            if(fast != nullptr){
                fast = fast -> next;
            }

            slow = slow -> next;

            // step 3: checking condition for occurance of loop cycle
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};

*/