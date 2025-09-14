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
class circularList{
    Node* head;
    Node* tail;
    public:
    circularList(){
        head=tail=NULL;
    }
    void print(){
        Node* temp = head;
        
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
};
int main(){
    circularList cll;
    cll.push_front(1);
    cll.push_front(2);
    return 0;
}