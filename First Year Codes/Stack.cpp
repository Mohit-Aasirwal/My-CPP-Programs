#include <iostream>
#include <stack>
class Stack {
public:
  int top;
  int *arr;
  int size;
  // constructor
  Stack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
  }
  // functions
  void push(int a) {
    if (size - top > 1) {
      top++;
      arr[top] = a;
    } else {
      std::cout << "Stack overflow" << std::endl;
    }
  }
  void pop() {
    if (top >= 0) {
      top--;
    } else {
      std::cout << "Stack underflow" << std::endl;
    }
  }
  int peek() {
    if (top >= 0) {
      return arr[top];
    } else {
      std::cout << "Stack is empty" << std::endl;
      return -1;
    }
  }
  bool isEmpty() {
    if (top == -1) {
      return true;
    } else {
      return false;
    }
  }
};
int main() {
  Stack s(4);
  s.push(12);
  s.push(11);
  s.push(10);
  s.push(9);
  std::cout<<s.peek()<<std::endl;
  s.pop();
 std::cout<< s.peek()<<std::endl;
  if(s.isEmpty()==true){
    std::cout<<"stack is empty"<<std::endl;
  }else{
    std::cout<<"stack is not empty"<<std::endl;
  }
}