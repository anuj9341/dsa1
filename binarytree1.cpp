#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left=right=NULL;
    }
};
static int idx = -1;
Node* buildTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
    
}
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void levelorder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node* curr = q.front();
        q.pop();
        if(curr == NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }
        cout<<curr->data<<" ";
        if(curr->left!= NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht,rightht)+1;
}
int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = count(root->left);
    int right = count(root->right);
    return left+right+1;
}
int main(){
    vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    //cout<<root->right->data;
    //preOrder(root);
    //inorder(root);
    //postorder(root);
    //levelorder(root);
    //cout<<count(root)<<endl;
    cout<<height(root);
    return 0;
}