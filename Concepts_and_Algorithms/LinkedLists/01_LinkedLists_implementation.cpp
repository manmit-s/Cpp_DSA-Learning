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

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                return;
            }
            else{
                newNode->next = head;
                head = newNode;
            }
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

        void pop_front(){
            if(head == NULL){
                cout<<"Linked List already empty!!"<<endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL; //this line is not neccessary as we are deleting the temp anyways
            delete temp;
        }
        
        void pop_back(){
            if(head == NULL){
                cout<<"Linked List already empty!!"<<endl;
                return;
            }
            else if(head == tail){ //if there is only one node
                delete head;
                head = tail = NULL;
                return;
            }

            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }

        void inserAtPos(int val, int pos){
            int n = nodeCount();
            if(pos < 0 || pos > n){
                cout<<"Invalid Position"<<endl;
                return;
            }

            if(pos == 0){
                push_front(val);
                return;
            }

            if(pos == n){
                push_back(val);
                return;
            }

            Node* temp = head;
            
            for(int i = 0; i < pos-1; i++){
                temp = temp->next;
            }
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;            
        }
        
        int nodeCount(){
            Node* temp = head;
            int count = 0;
            while(temp != NULL){
                temp = temp->next;
                count++;
            }
            return count;
        }

        bool searchLL(int key){
            Node* temp = head;
            while(temp != NULL){
                if(temp->data == key) return true;
                temp = temp->next;
            }
            return false;
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
    ll.push_back(67);
    ll.push_front(69);
    ll.push_back(36);
    ll.push_front(24);
    ll.inserAtPos(69, 3);

    cout<<ll.nodeCount()<<endl;
    if(ll.searchLL(69)){
        cout<<"69 is present"<<endl;
    }
    ll.display();
    return 0;
}