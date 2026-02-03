/*

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        // TORTOISE-HARE METHOD

        if(head == nullptr || head -> next == nullptr){
            return head;
        }

        ListNode* tortoise = head; // tortoise = slow
        ListNode* hare = head; // hare = fast

        while(hare != nullptr && hare -> next != nullptr){
            
            hare = hare -> next -> next;

            tortoise = tortoise -> next;
        }

        return tortoise;
    }
};

*/