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
void printList(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<  "NULL";
}
int main(){
    Node* first = new Node(134);
    Node* head = first;
    head = insertAtBegining(head, 100);
    head = insertAtBegining(head, 1000);
    head = insertAtBegining(head, 10000);
    head = insertAtBegining(head, 100000);
    head = insertAtBegining(head, 10234);
    head = insertAtBegining(head, 13240);
    head = insertAtBegining(head, 10234);
    head = insertAtBegining(head, 10);
    head = insertAtBegining(head, 1042);
    head = insertAtBegining(head, 12430);
    head = insertAtBegining(head, 10432);
    printList(head);
    return 0;
}