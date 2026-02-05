/*

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* node = new ListNode(-1);
        ListNode* current = node;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int carry = 0;

        while(temp1 != nullptr || temp2 != nullptr) {

            int sum = carry;

            // adding values from both the linked list
            if(temp1) {
                sum += temp1 -> val;
            }
            
            if(temp2) {
                sum += temp2 -> val;
            }

            // creating new node with the sum value
            ListNode* newNode = new ListNode(sum % 10);
            carry = sum / 10;

            // linking the new node to the result linked list
            current -> next = newNode;
            current = current -> next;

            // moving to the next nodes in the input linked lists
            if(temp1) temp1 = temp1 -> next;
            if(temp2) temp2 = temp2 -> next;
        }

        // if there is a carry left, create a new node
        if(carry) {
            current -> next = new ListNode(carry);
        }

        return node -> next;
    }
};

*/