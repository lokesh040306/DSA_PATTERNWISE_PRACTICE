/*

Node* sortList(Node *head){
    
    // Base case
    if(head == nullptr || head -> next == nullptr) return head;

    // Creating separate lists for 0s, 1s and 2s
    Node* head0 = nullptr;
    Node* tail0 = nullptr;

    Node* head1 = nullptr;
    Node* tail1 = nullptr;

    Node* head2 = nullptr;
    Node* tail2 = nullptr;

    Node* curr = head;

    while(curr != nullptr) {
        // 0 Node
        if(curr -> data == 0) {
            if(head0 == nullptr) {
                head0 = tail0 = curr;
            }
            else {
                tail0 -> next = curr;
                tail0 = curr;
            }
        }
        else if(curr -> data == 1) {
            if(head1 == nullptr) {
                head1 = tail1 = curr;
            }
            else {
                tail1 -> next = curr;
                tail1 = curr;
            }
        }
        else {
            if(head2 == nullptr) {
                head2 = tail2 = curr;
            }
            else {
                tail2 -> next = curr;
                tail2 = curr;
            }
        }

        curr = curr -> next;
    }

    // Merging the three lists
    if(tail0 != nullptr) tail0 -> next = head1;
    if(tail1 != nullptr) tail1 -> next = head2;
    if(tail2 != nullptr) tail2 -> next = nullptr;

    // Returning the head of the modified list
    return head0 ? head0 : (head1 ? head1 : head2);
}

*/