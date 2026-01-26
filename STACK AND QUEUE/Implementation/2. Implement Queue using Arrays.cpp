/*

class myQueue {

private:
    int *arr;
    int front, rear;
    int capacity;
    int size;

public:
    myQueue(int n) {
        capacity = n;
        arr = new int[n];
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int x) {
        if (!isFull()) {
            rear = (rear + 1) % capacity;
            arr[rear] = x;
            size++;
        }
    }

    void dequeue() {
        if (!isEmpty()) {
            front = (front + 1) % capacity;
            size--;
        }
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }
};


*/