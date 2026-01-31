/*

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        
        // Linked List Traversal
        
        // If the first Node is to be deleted
        if(x == 1) {
            Node* temp = head;
            head = head -> next;
            delete temp;
            return head;
        }
        
        Node* temp = head;
        int count = 1;
        
        // Traverse to the (x-1)th Node
        while(temp != NULL && count < x - 1) {
            count++;
            temp = temp -> next;
        }
        
        // If we found the node to Delete
        if(temp != NULL && temp -> next != NULL) {
            Node* del = temp -> next;
            temp -> next = del -> next;
            delete del;
        }
        
        return head;
    }
};

*/