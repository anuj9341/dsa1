#include<bits/stdc++.h>
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
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            head = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            head = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void insert(int val, int pos){
        Node* newNode = new Node(val);
        if(pos<0){
            return;
        }
        if(pos == 0){
            push_front(val);
        }
        Node* temp = head;
        for(int i=0; i<pos; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

    }
    void pop_front(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete(temp);
    }
    void pop_back(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete(tail);
        tail = temp;
    }
    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    int searchLL(int key){
        Node* temp = head;
        int idx = 0;
        while(temp!=NULL){
            if(temp->data == key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }

};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.insert(5,2);
    
    //ll.pop_front();
    //ll.pop_back();
    ll.print();
    cout<<endl;
    cout<<ll.searchLL(2);
}