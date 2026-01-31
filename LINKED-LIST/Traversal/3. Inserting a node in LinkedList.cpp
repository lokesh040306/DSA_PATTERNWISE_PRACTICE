/*

Node * insert(Node * head, int n, int pos, int val) {
    
    // Linked List Traversal

    Node* temp = new Node(val);

    // Inserting at the head
    if(pos == 0) {
        temp -> next = head;
        head = temp;
        return head;
    }

    Node* curr = head;

    // Traversing to the (pos-1)th node
    while(curr != nullptr && pos > 1) {
        pos--;
        curr = curr -> next;
    }

    // If position is more than the number of nodes
    if(curr == nullptr) return head;

    // Inserting the new node at the given position
    temp -> next = curr -> next;
    curr -> next = temp;

    return head;
}

*/