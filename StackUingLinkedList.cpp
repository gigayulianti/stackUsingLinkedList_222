#include <iostream>

using namespace std;

//node class representating a single node in the linked list
class node
{
    public:
        int data;
        node *next;

        node()
        {
            next;
        }
};

//stack class
class stack {
    private:
        Node* top;
    
    public:
        Stack() {
            top = NULL;
        }

        //STACK class
        void push(int value) {
             Node* newNode = new Node();
             newNode->data = value;
             newNode->next = top;
             top = newNode;
             cout << "push value: " << value << endl;
             return value;

        }
    
         // peration: Remove the topmost elemen from the stack
        void pop()
        {
            if (isempty())
            {
                cout << "stack is empety" << endly;
            }

            node *temp = top;
            top = top->next;
            cout << "popped value: " << temp->data << endl;

        }
        
        //peel/top operation: Retrive the value of topset element witchout removing
        void peek()
    