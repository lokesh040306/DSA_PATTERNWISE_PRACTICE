/*

void deleteNode(Node * ( & head), int pos) {
    
    Node* curr = head;
    int count = 0;

    // Delete first node
    if(pos == 0) {
        head = head -> next;
        head -> prev = nullptr;
    }

    // move to the pos where we have to delete the element
    while(curr != nullptr && count < pos) {
        curr = curr -> next;
        count++;
    }

    // adjust the pointers
    if(curr -> prev) {
        curr -> prev -> next = curr -> next;
    }

    if(curr -> next) {
        curr -> next -> prev = curr -> prev;
    }
}

*/