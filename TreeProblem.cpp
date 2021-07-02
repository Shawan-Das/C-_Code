#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};


Node* createNode(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node *currentNode, int value){
    if(currentNode==NULL){
        currentNode = createNode(value);
    }else if(value <= currentNode->data){
        currentNode->left = insert(currentNode->left,value);
    }else{
        currentNode->right = insert(currentNode->right,value);
    }
    return currentNode;
}
//int Search(Node* currentNode, int value){
//    if(currentNode==NULL){
//        return 0;
//    }else if(currentNode->data==value){
//        return 1;
//    }else if(value <= currentNode->data){
//        return Search(currentNode->left,value);
//    }else{
//        return Search(currentNode->right,value);
//    }
//}

void Preorder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(Node* root){
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Postorder(Node* root){
    if(root==NULL) return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node* root = NULL;
    root = insert(root,7);
    insert(root,4);
    insert(root,4);
    insert(root,9);
    insert(root,4);
    insert(root,0);
    insert(root,0);
    insert(root,1);
    insert(root,4);


    cout<<"PreOrder : "; Preorder(root); cout<<endl;
    cout<<"InOrder : "; Inorder(root); cout<<endl;
    cout<<"PostOrder : "; Postorder(root); cout<<endl;
//    int find = Search(root,45);
//
//    if(find == 1){
//        cout<<"Value Found"<<endl;
//    }else{
//        cout<<"Value not Found"<<endl;
//    }

}

