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
        //Simple Approach - using size of LL
        // int middleNode(){
        //     int n = nodeCount();
        //     Node* temp = head;
        //     for(int i = 0; i < n/2; i++){
        //         temp = temp->next;
        //     }
        //     return temp->data;
        // }

        //Slow - Fast Pointer Approach - using 2 pointers
        int middleNode(){
            Node *slow = head, *fast = head;
            while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow->data;
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
    cout<<ll.middleNode()<<endl;
    return 0;
}