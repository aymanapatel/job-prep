#include <iostream>
#include <string>

using namespace std;

struct Node {
    
    int data; // data
    Node* next; // pointer
    Node* prev; // pointer

    // Constructor
    Node(int val): data(val), next(nullptr), prev(nullptr) {}


};

class LinkedList {

    public:
        Node* head = nullptr;

        void insertBack(int val) {
            Node* newNode = new Node(val);
       
            // Empty
            if(!head) {
                head = newNode;
                return;
            }

            Node* temp = head;
            while(temp-> next) {
                temp = temp->next;
            }
            temp-> next = newNode;

        }


        void display() {
            Node* temp = head;
            while(temp) {
                cerr << temp->data << " ";
                cout << temp->data << " ";
                temp = temp->next;
            }

        }

};

int main() {
    int val;
    LinkedList linked_list;

    while (cin >> val) {
        cerr << "Debug";
        linked_list.insertBack(val);
    }
    
    linked_list.display();
    return 0;
}