#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }

};

class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head = tail = NULL;
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(tail == NULL){
                head = tail = newNode;
                return;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void reverseLL(){
            Node* prev = NULL; 
            Node* curr = head; 
            Node* next = NULL;
            
            while(curr != NULL){
                next = curr->next;
                curr->next = prev;
                
                prev = curr;
                curr = next;
            }
            head = prev;
        }

        void display(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<"\t";
                temp = temp->next;
            }
            cout<<endl;
        }
};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    ll.display();

    ll.reverseLL();
    ll.display();
    return 0;
}