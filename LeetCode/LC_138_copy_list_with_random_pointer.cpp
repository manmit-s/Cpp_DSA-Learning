#include <iostream>
#include <unordered_map>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        Node *newHead = new Node(head->val);
        Node *oldTemp = head->next;
        Node *newTemp = newHead;
        unordered_map<Node*, Node*> map;
        map[head] = newHead;

        while(oldTemp){
            Node *copyNode = new Node(oldTemp->val);
            map[oldTemp] = copyNode;
            newTemp->next = copyNode;
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head; newTemp = newHead;
        while(oldTemp){
            newTemp->random = map[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        
        return newHead;
    }
};

int main(){
    
    return 0;
}