#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(NULL) {};

    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList myList;
    myList.insert(25);
    myList.insert(45);
    myList.insert(60);
    myList.display();

    return 0;
}
