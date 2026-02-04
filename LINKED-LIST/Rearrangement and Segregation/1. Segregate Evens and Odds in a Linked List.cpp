/*

Node* segregateEvenOdd(Node* head)
{
    // Base case
    if(head == nullptr || head -> next == nullptr) return head;

    // Creating separate lists for even and odd nodes
    Node* evenHead = nullptr;
    Node* evenTail = nullptr;

    Node* oddHead = nullptr;
    Node* oddTail = nullptr;

    Node* curr = head;

    while(curr != nullptr) {

        // Even Node
        if(curr -> data % 2 == 0) {
            if(!evenHead) {
                evenHead = curr;
                evenTail = curr;
            }
            else {
                evenTail -> next = curr;
                evenTail = curr;
            }
        }
        else {
            if(!oddHead) {
                oddHead = curr;
                oddTail = curr;
            }
            else {
                oddTail -> next = curr;
                oddTail = curr;
            }
        }

        curr = curr -> next;
    }

    // Merging Even and Odd Lists
    if(evenTail != nullptr) evenTail -> next = oddHead;
    if(oddTail != nullptr) oddTail -> next = nullptr;

    // Returning the head of the modified list
    return evenHead ? evenHead : oddHead;
}

*/