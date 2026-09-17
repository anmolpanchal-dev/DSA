#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* insertAtBegining(Node* head , int value){
    Node* element = new Node(value);
    element -> next = head;
    head = element;
    return head;
}
Node* insertAtEnd(Node* head , int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        return newNode;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
void printList(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<  "NULL"<<endl<<endl;
}

Node* insertAtPosition(Node* head, int pos, int val){
    if (pos < 0)
    {
        return head;
    }
    Node* newNode = new Node(val);
    if(head == nullptr){
        if(pos == 0){
            return newNode;
        }
        delete newNode;
        return head;
    }
    if (pos == 0){
        newNode->next = head;
        head = newNode;
        return head;
    }
    int count = 0;
    Node* temp = head;
    while(temp != nullptr && count < pos - 1){
        temp = temp->next;
        count++;
    }
    if (temp == nullptr){
        delete newNode;
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode; 
    return head;
}

int main(){
    Node* first = new Node(134);
    Node* head = first;
    head = insertAtBegining(head, 1);
    head = insertAtBegining(head, 2);
    head = insertAtBegining(head, 3);
    head = insertAtBegining(head, 4);
    printList(head);
    cout<<"------------end insert----------------"<<endl<<endl;
    head = insertAtEnd(head, 100);
    head = insertAtEnd(head, 200);
    head = insertAtEnd(head, 300);
    head = insertAtEnd(head, 400);
    printList(head);
    cout<<"------------Position Insertion----------------"<<endl<<endl;
    insertAtPosition(head,3,555);
    printList(head);
    

    return 0;
}