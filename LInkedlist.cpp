#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int lengthLL(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp){ 
      temp = temp->next;
      cnt++; 
    }
    return cnt;
}
int searchElement(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data==val){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
//Deletion at Head
Node* removehead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
//Deletion at Tail
Node* removeTail(Node* head){
    if(head==NULL || head->next == nullptr) return NULL;
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
int main(){
    vector<int> arr = {10,20,30,40,50};
    //Node * y = new Node(arr[0]);
    Node* head = convertArr2LL(arr);
    print(head);
    cout<<endl;
    //int len = lengthLL(head);
    //cout<<len<<endl;
    //cout<<searchElement(head,40);
    //head = removehead(head);
    head = removeTail(head);
     print(head);
}