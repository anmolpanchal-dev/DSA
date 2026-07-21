#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* insertAtBegining(Node* head, int value) {
    Node* element = new Node(value);
    element->next = head;
    return element;
}

Node* insertEnd(Node* head, int value) {
    Node* element = new Node(value);
    if (head == nullptr) {
        return element;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = element;
    return head;
}

Node* insertAtPosition(Node* head, int pos, int val) {
    if (pos < 0) return head;
    if (pos == 0) {
        Node* newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }
    Node* temp = head;
    int count = 0;
    while (temp != nullptr && count < pos - 1) {
        temp = temp->next;
        count++;
    }
    if (temp == nullptr) return head;
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

Node* deleteAtBeginning(Node* head) {
    if (head == nullptr) return nullptr;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteAtEnd(Node* head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteAtPos(Node* head, int pos) {
    if (head == nullptr || pos < 0) return head;
    if (pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    int count = 0;
    while (temp != nullptr && count < pos - 1) {
        temp = temp->next;
        count++;
    }
    if (temp == nullptr || temp->next == nullptr) return head;
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    print(head);

    head = insertAtBegining(head, 5);
    print(head);

    head = insertAtPosition(head, 2, 15);
    print(head);

    head = deleteAtBeginning(head);
    print(head);

    head = deleteAtEnd(head);
    print(head);

    head = deleteAtPos(head, 1);
    print(head);

    return 0;
}