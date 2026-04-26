#include <iostream>
using namespace std;

class MyLinkedList {
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };
public:
    Node* head;
    int size;   // maintain size dynamically

    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) return -1;
        int i = 0;
        Node* temp = head;
        while (i != index) {
            temp = temp->next;
            i++;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        int i = 0;
        while (i < index - 1) {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        Node* temp = head;
        if (index == 0) {
            head = head->next;
            delete temp;
        } else {
            int i = 0;
            while (i < index - 1) {
                temp = temp->next;
                i++;
            }
            Node* toDelete = temp->next;
            temp->next = toDelete->next;
            delete toDelete;
        }
        size--;
    }
};


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main(){
    
    return 0;
}