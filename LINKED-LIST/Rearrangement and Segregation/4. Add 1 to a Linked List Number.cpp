/*

class Solution {
    Node* reverseList(Node* head) {

        Node* prev = nullptr;
        Node* curr = head;
    
        while(curr != nullptr) {
            Node* nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
        }
    
        return prev;
    }

  public:
    Node* addOne(Node* head) {
        
        head = reverseList(head);

        Node* current = head;
    
        int carry = 1;
    
        while(current != nullptr && carry != 0) {
    
            int sum = current -> data + carry;
            current -> data = sum % 10;
            carry = sum / 10;
    
            if(current -> next == nullptr && carry != 0) {
                Node* newNode = new Node(carry);
                current -> next = newNode;
                carry = 0;
            }
    
            current = current -> next;
        }
    
        head = reverseList(head);
    
        return head;
    }
};

*/