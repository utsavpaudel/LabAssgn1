#include <iostream>
#include "queue.h"
using namespace std;
Queue::Queue(){
    front = -1;
    rear = -1;
}

bool Queue::isFull(){
    return rear>= MAX_QUEUE_SIZE-1;
}
bool Queue::isEmpty(){
    return (front==rear);
}

void Queue::enqueue(int element){
    if(isFull()){
        cout << "Cannot enqueue "<<element <<".Queue is full.";
    }
    else{
        rear+= 1;
        data[rear] = element;
    }
}

int Queue::dequeue(){
    if (isEmpty()){
        cout<<"Cannot dequeue an element from an empty Queue.";
    }
    else{
        front+=1;
        return data[front];
    }
}
int Queue :: frontPrint(){
    return data[front];
}
int Queue :: rearPrint(){
    return data[rear];
}

Queue::~Queue(){}

int main(){
    Queue q;
    // q.enqueue(10);
     q.enqueue(40);
     q.enqueue(50);
    // cout << q.isEmpty()<<endl;
    // cout << q.isFull()<<endl;
    cout << q.dequeue()<<endl;
    cout << q.dequeue()<<endl;
    //cout << q.frontPrint();

}