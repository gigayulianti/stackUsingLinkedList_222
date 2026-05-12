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
       {
        if (top == NULL)
        {
            cout << "List is Empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;

        } //return the value of the top node
    }

    //isEmpty operation: check of the stack is empty
    bool isEmpty()
    {
        return top == NULL; //Return true if the top pointer is null, indicating an empty stack
    }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice !=5)
    {
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.peek\n";
        cout << "4.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); //push the entered value onto the stack
            break;
        case 2:
            if (!stack.isEmpty())
            {
                stack.pop(); //pop the top element from the stack
            }
            else 
            {
                cout << "Stack is empty. Cannot pop." << endl;
            }
            break;
        case 3:
            