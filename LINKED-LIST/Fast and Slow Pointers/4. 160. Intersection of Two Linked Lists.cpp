/*

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        // Edge Case
        if(headA == nullptr || headB == nullptr) return nullptr;

        // Two Pointer Approach
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA != tempB){

            tempA = tempA -> next;
            tempB = tempB -> next;

            // to find intersection
            if(tempA == tempB) return tempA;

            // exchanging pointers
            if(tempA == nullptr) tempA = headB;
            if(tempB == nullptr) tempB = headA;
        }

        return tempA;
    }
};

*/