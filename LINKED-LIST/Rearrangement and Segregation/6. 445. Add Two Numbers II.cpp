/*

class Solution {
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = head;
    
        while(curr != nullptr) {
            ListNode* nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
        }
    
        return prev;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1 = reverseList(l1);
        l2 = reverseList(l2);

        ListNode* node = new ListNode(-1);
        ListNode* current = node;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int carry = 0;

        while(temp1 != nullptr || temp2 != nullptr) {

            int sum = carry;

            if(temp1) {
                sum += temp1 -> val;
            }
            
            if(temp2) {
                sum += temp2 -> val;
            }

            ListNode* newNode = new ListNode(sum % 10);
            carry = sum / 10;

            current -> next = newNode;
            current = current -> next;

            if(temp1) temp1 = temp1 -> next;
            if(temp2) temp2 = temp2 -> next;
        }

        if(carry) {
            current -> next = new ListNode(carry);
        }

        node = reverseList(node -> next);

        return node;
    }
};

*/