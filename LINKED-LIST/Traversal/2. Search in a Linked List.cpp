/*

int searchInLinkedList(Node<int> *head, int k) {
    
    // Linked List Traversal

    // Traverse the Linked List
    Node<int> *temp = head;

    while(temp != nullptr) {

        // Check if current node has the required value
        if(temp -> data == k) return 1;

        temp = temp -> next;
    }

    return 0;
}

*/