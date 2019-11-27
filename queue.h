#define MAX_QUEUE_SIZE 100
class Queue{
    public:
    Queue();
    ~Queue();
    void enqueue(int element);
    int dequeue();
    int frontPrint();
    int rearPrint();
    bool isEmpty();
    bool isFull();
   
    private:
    int data[MAX_QUEUE_SIZE];
    int front;
    int rear;
};