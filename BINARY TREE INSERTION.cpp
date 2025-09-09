#include <iostream>
using namespace std;
struct Node {
    int data;
    Node * left;
    Node * right;
Node (int Val){
    data = Val;
    left = nullptr;
    right = nullptr;
}
    };
     void preorder(Node * root){
        if(root){
            cout << root -> data << " ";
            preorder (root -> left);
            preorder (root -> right);
            }}
    void inorder(Node * root){
        if(root){
            inorder (root -> left);
            cout << root -> data << " ";
            inorder (root -> right);
            }}
    void postorder(Node * root){
        if(root){
            postorder (root -> left);
            postorder (root -> right);
            cout << root -> data << " ";
            }}
            
             Node*insert(Node*root, int arr[], int i, int n){
           if(i<n ){
               Node*temp = new Node(arr[i]);
               root = temp;
               root -> left = insert(root-> left,arr,2*i+1,n);
               root -> right = insert(root-> right,arr,2*i+2,n);
           }
           return root;
       }
    int main(){
       int n;
       cout << "Enter the size of array: ";
       cin >> n;
       int * arr = new int [n];
       for(int i = 0; i <n; i++){
           cin >> arr[i];
       }
       Node *root = insert(nullptr, arr, 0, n);
       inorder(root);
       cout<<endl;
       preorder(root);
       cout<<endl;
       postorder(root);
       cout<<endl;
    }
      
    
   
        
