#include <iostream>

using namespace std;

//node class representating a single node in the linked list
class Node
{

        next = NULL;
    }
};
public:
    int data;
    Node *next;

    Node()
    {
//Stack class
class stack
{
private:
    Node *top; //pointer to the top node of the stack

public:
    stack()
    {
        top = NULL;
    }
    int push(int value)
    {
        ode *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        topN = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    //pop operation: Remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }

        Node *temp = top;
        top = top->next;
        