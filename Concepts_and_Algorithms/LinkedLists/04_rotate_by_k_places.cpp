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
        
        void rotateByK(int k){
            if (!head || !head->next || k == 0) return;
            // My First Approach - O(n^2)
            /*
            while(k>0){
                Node* temp = head;
                while(temp->next->next != NULL){
                    temp = temp->next;
                }
                
                tail->next = head;
                head = tail;
                tail = temp;
                tail->next = NULL;
                k--;
            }
            */

            // Efficient Approach - O(n)
            int n = nodeCount();
            tail->next = head;
            int steps = n - (k%n);
            Node* temp = head;
            for(int i = 1; i < steps; i++){
                temp = temp->next;
            }
            head = temp->next;
            temp->next = NULL;
            tail = temp;
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
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.display();
    
    ll.rotateByK(2);
    ll.display();
    return 0;
}