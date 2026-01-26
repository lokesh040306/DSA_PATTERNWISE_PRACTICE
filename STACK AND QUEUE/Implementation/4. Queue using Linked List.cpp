/*

class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {

  private:
    Node* frontNode;
    Node* rearNode;
    int cnt;

public:
    myQueue() {
        frontNode = nullptr;
        rearNode = nullptr;
        cnt = 0;
    }

    bool isEmpty() {
        return frontNode == nullptr;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);

        if(isEmpty()) {
            frontNode = rearNode = newNode;
        } 
        else {
            rearNode -> next = newNode;
            rearNode = newNode;
        }
        cnt++;
    }

    void dequeue() {
        if(isEmpty()) {
            return;
        }

        Node* temp = frontNode;
        frontNode = frontNode -> next;
        delete temp;
        cnt--;

        if(frontNode == nullptr) {
            rearNode = nullptr;
        }
    }

    int getFront() {
        if(isEmpty()) {
            return -1;
        }
        return frontNode -> data;
    }

    int size() {
        return cnt;
    }
};


*/