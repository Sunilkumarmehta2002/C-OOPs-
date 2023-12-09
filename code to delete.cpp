#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

void insertNode(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void deleteNode(Node*& head, int value) {
    if (!head) {
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next && current->next->data != value) {
        current = current->next;
    }

    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

void displayList(Node* head) {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    insertNode(head, 11);
    insertNode(head, 22);
    insertNode(head, 33);
    insertNode(head, 44);
    insertNode(head, 55);

    std::cout << "Original linked list: ";
    displayList(head);

    deleteNode(head, 11);
    deleteNode(head, 33);
    deleteNode(head, 55);

    std::cout << "Linked list after deletions: ";
    displayList(head);

    return 0;
}
