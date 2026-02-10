/*

Node* insert(int k, int val, Node *head) {
    
    Node *newNode = new Node(val);
        
    // Case 1: insert at head
    if (k == 0) {
        newNode -> next = head;
        if (head != NULL) {
            head -> prev = newNode;
        }
        return newNode;  // new head
    }
    
    int count = 0;
    Node *curr = head;
    
    // move to (k-1)th node
    while(curr != NULL && count < k - 1) {
        count++;
        curr = curr -> next;
    }
    
    if(curr == NULL) {
        return head;
    }
    
    // Case 2 & 3: middle or end
    newNode -> next = curr -> next;
    newNode -> prev = curr;

    if(curr -> next != NULL) {
        curr -> next -> prev = newNode;
    }
    curr -> next = newNode;
    
    return head;
}

*/