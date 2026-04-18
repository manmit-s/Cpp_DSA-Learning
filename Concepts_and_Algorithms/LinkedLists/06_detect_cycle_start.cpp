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
        
        Node *startNodeOfCycle(){
            Node *slow = head, *fast = head;
            bool flag = false;
            while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
                if(slow == fast){
                    flag = true;
                    break;
                }
            }
            if(!flag) return NULL;
            slow = head;
            Node *prev = NULL; //used to store last value of fast pointer
            while(slow != fast){
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL; //removing the cycle
            return slow; //return the start of the Cycle
        }

        void display(){
            Node* temp = head;
            while(temp != NULL){
                if(temp->next == NULL){
                    cout<<temp->data<<endl;
                    return;
                }
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<endl;
        }
};


int main(){
    
    return 0;
}