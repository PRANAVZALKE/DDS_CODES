#include <iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};
Node* insert(Node*root, int key){
    if(root==nullptr){
        return new Node (key);
    }
    else if(key < root-> data){
        root -> left = insert(root ->left, key);
    }
    else if (key > root -> data){
        root -> right = insert(root ->right, key);
    }
 
        return root;
    
    
}
    void preorder (Node * root){
        if(root){
            cout << root -> data << " ";
            preorder (root -> left);
            preorder (root -> right);
        }
    }
    void inorder (Node * root){
        if(root){
            
            inorder (root -> left);
            cout << root -> data << " ";
            inorder (root -> right);
        }
    }
    void postorder(Node * root){
        if(root){
            
            postorder (root -> left);
            postorder (root -> right);
            cout << root -> data << " ";
        }
    }
    
int main() {
    int n;
    cout << "Enter the total number of value: ";
    cin>>n;
    int*arr=new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Node* root = nullptr;
    for(int i = 0; i<n; i++){
        root = insert(root, arr[i]);
    }
    cout<<"PREORDER: ";
    preorder(root);
    cout << endl;
    cout<<"INORDER: ";
    inorder(root);
    cout << endl;
    cout<<"POSTORDER: ";
    postorder(root);
    cout << endl;
    
}
