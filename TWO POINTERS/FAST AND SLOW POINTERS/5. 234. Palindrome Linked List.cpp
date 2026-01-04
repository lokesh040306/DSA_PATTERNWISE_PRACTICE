/*

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        // Two Pointer's
        // Slow and Fast Pointer's

        if(head == nullptr || head -> next == nullptr) return true;

        ListNode* slow = head;
        ListNode* fast = head;

        // step 1: finding middle of linked list
        while(fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        // step 2: reversing the second half of the linked list

        ListNode* prev = nullptr;
        ListNode* curr = slow;

        while(curr != nullptr) {
            ListNode* nextTemp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextTemp;
        }

        // step 3: comparing the reversed linked list with original half linked list
        ListNode* first = head;
        ListNode* second = prev;

        while(second != nullptr) {
            if(first -> val != second -> val) return false;
            first = first -> next;
            second = second -> next;
        }

        return true;
    }
};

*/