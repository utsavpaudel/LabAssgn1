#include <iostream>
#include "stack.h"
using namespace std;
Stack::Stack()
{
    top = -1;
}

bool Stack::isEmpty(){
    return top<0;
}

bool Stack::isFull(){
    return top>=MAX_STACK_SIZE-1;
}

int Stack:: peek(){
    if(!isEmpty())
    return elements[top];
}

void Stack:: push(int element)
{
    if (isFull())
    {
        cout << "Cannot push "<<element <<".Stack is full.";
    }
    else{
        top++;
        this->elements[top] = element;
    }
}

 int Stack::pop()
 {
      if(top < 0)
      {
          cout<< "Cannot pop an element from an empty stack";
          return 2;
     }
      else{
      /* int p = this->elements[top];
       top--;
         return p;*/
         return elements[top--];
      }
 }

Stack::~Stack(){}


int main(){
    Stack s;
    s.push(50);
    s.push(70);
    // cout<<s.isEmpty();
        cout<<s.peek()<<endl;
        cout<< s.pop() <<endl;
        cout<< s.pop() <<endl;
}





