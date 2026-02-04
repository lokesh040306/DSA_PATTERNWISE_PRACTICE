/*

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        // checking if the list is empty
        if(head == nullptr || head -> next == nullptr) return head;

        // finding odd and even placed element
        ListNode* odd = head;
        ListNode* even = head -> next;
        ListNode* evenHead = head -> next;

        while(even != nullptr && even -> next != nullptr){

            // moving to odd and even places
            odd -> next = odd -> next -> next;
            even -> next = even -> next -> next;

            // reassigning the value to the linked list
            odd = odd -> next;
            even = even -> next;
        }
        odd -> next = evenHead;
        return head;
    }
};

*/