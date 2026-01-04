/*

class Solution {
public:
    int pairSum(ListNode* head) {
        
        // Slow and Fast Pointer's

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

        int twinSum = 0;

        while(second != nullptr) {
            int sum = first -> val + second -> val;
            twinSum = max(twinSum, sum);

            // increment the pointers
            first = first -> next;
            second = second -> next;
        }

        return twinSum;
    }
};

*/