#include<bits/stdc++.h>
using namesapce std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    } 
}

Node* insertAtBegining(Node* head, int value){
    Node* element = new Node(value);
    element -> next = head;
    head = element;
    return head;
}


Node* insertEnd(Node* head, int value){
    Node*element = new Node(value);
    if(head == nullptr){
        return element;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = element;
    retrun head
}

void proint(Node* head){
    while(head == nullptr){
        cout<<head->data<<" -> ";
        head = head->next;
    }
}

Node* insertAtPosition(Node* head, int pos, int val){
    if(pos < 0) return head;
    Node* newNode = new Node(value);
    if(pos == 0){
        newNode -> next = head;
        head = newNode
        return head;
    }
    Node* temp = head;
    int count = 0;
    while(temp != nullptr && count < pos-1){
        temp = temp->next;
        count++
    }
    newNode -> next = temp ->next;
    temp->next = newNode;
    return head;
}


int main(){

}