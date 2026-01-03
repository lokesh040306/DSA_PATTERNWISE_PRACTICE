/*

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        // TORTOISE-HARE METHOD

        if(head == nullptr || head -> next == nullptr){
            return head;
        }

        ListNode* tortoise = head; // tortoise = slow
        ListNode* hare = head -> next; // hare = fast

        while(hare != nullptr) {
            
            hare = hare -> next;
            if(hare != nullptr){
                hare = hare -> next;
            }

            tortoise = tortoise -> next;
        }
        
        return tortoise;
    }
};

*/