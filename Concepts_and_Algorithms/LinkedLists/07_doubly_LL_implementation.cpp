#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLL
{
    Node *head;
    Node *tail;

public:
    DoublyLL()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Doubly Linked List is already empty!" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        temp->next = NULL; // Not necessary as we are deleting temp anyways!
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Doubly Linked List is already empty!" << endl;
            return;
        }
        Node *temp = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }

    void insertAtPos(int val, int pos)
    {
        int n = nodeCount();
        if (pos > n || pos < 0)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        else if (pos == 0)
        {
            push_front(val);
            return;
        }
        else if (pos == n)
        {
            push_back(val);
            return;
        }
        else
        {
            Node *temp = head;
            Node *newNode = new Node(val);
            for (int i = 0; i < pos; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
    }

    int nodeCount()
    {
        Node *temp = head;
        int count = 0;
        while (temp)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLL dll;

    cout << "=== Testing Doubly Linked List ===" << endl
         << endl;

    // Test push_front
    cout << "1. Testing push_front(10, 20, 30):" << endl;
    dll.push_front(10);
    dll.push_front(20);
    dll.push_front(30);
    cout << "List: ";
    dll.display();
    cout << "Node count: " << dll.nodeCount() << endl
         << endl;

    // Test push_back
    cout << "2. Testing push_back(5, 1):" << endl;
    dll.push_back(5);
    dll.push_back(1);
    cout << "List: ";
    dll.display();
    cout << "Node count: " << dll.nodeCount() << endl
         << endl;

    // Test insertAtPos
    cout << "3. Testing insertAtPos(15, 2):" << endl;
    dll.insertAtPos(15, 2);
    cout << "List: ";
    dll.display();
    cout << "Node count: " << dll.nodeCount() << endl
         << endl;

    // Test insertAtPos at end
    cout << "4. Testing insertAtPos(0, at end):" << endl;
    dll.insertAtPos(0, dll.nodeCount());
    cout << "List: ";
    dll.display();
    cout << "Node count: " << dll.nodeCount() << endl
         << endl;

    // Test pop_front
    cout << "5. Testing pop_front():" << endl;
    dll.pop_front();
    cout << "List: ";
    dll.display();
    cout << "Node count: " << dll.nodeCount() << endl
         << endl;

    // Test pop_back
    cout << "6. Testing pop_back():" << endl;
    dll.pop_back();
    cout << "List: ";
    dll.display();
    cout << "Node count: " << dll.nodeCount() << endl
         << endl;

    // Test invalid position
    cout << "7. Testing invalid position (insertAtPos at pos 10):" << endl;
    dll.insertAtPos(99, 10);
    cout << endl;

    cout << "Final List: ";
    dll.display();
    cout << "Final Node count: " << dll.nodeCount() << endl;

    return 0;
}