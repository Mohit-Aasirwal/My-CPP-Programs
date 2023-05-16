#include <iostream>
using namespace std;

class Stack
{
public:
    int top;
    int *arr;
    int size;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int a)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = a;
        }
        else
        {
            std::cout << "Stack overflow" << std::endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            std::cout << "Stack underflow" << std::endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack *s = new Stack(6);
}