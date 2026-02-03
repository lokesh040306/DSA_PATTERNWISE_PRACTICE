/*

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* fast = head;
        ListNode* slow = head;

        // shifting 'fast' pointer to 'n' position 
        for(int i = 0; i < n; i++) {
            fast = fast -> next;
        }

        // check if it has to delete head
        if(fast == nullptr) {
            return head -> next;
        }

        // finding previous node of nodetodelete
        while(fast -> next != nullptr) {
            fast = fast -> next;
            slow = slow -> next;
        }

        // deleting the node
        ListNode* nodeToDelete = slow -> next;
        slow -> next = slow -> next -> next;
        delete(nodeToDelete);

        return head;
    }
};

*/