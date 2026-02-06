/*

Node* reverseDLL(Node* head)
{   
    Node* prev = NULL;
    Node* curr = head;
    
    Node* forw = NULL;
    
    while(curr != NULL) {
        
        forw = curr -> next;
        
        curr -> next = prev;
        
        curr -> prev = forw;
        
        prev = curr;
        
        curr = forw;
    }
    
    head = prev;
    
    return head; 
}

*/