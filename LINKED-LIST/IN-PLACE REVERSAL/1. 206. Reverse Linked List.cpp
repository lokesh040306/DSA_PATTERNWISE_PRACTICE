/*

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        // In-place Reversal 
        
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){

            ListNode* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
        return head;
    }
};

*/