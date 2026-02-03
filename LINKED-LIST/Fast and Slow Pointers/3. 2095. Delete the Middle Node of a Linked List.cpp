/*

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        // Fast and Slow Pointers
        
        if(head == nullptr || head -> next == nullptr) return nullptr;

        ListNode* fast = head -> next;
        ListNode* slow = head;
        ListNode* prev = nullptr;

        while(fast != nullptr){

            fast = fast -> next;
            if(fast != nullptr){
                fast = fast -> next;
            }
            prev = slow;
            slow = slow -> next;
        }
        
        prev -> next = slow -> next;
        delete(slow);
        
        return head;
    }
};

*/