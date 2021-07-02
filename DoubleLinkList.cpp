#include<bits/stdc++.h>
using namespace std;
///Double Link List
///Create Node
struct Node
{
    int data;
    Node* next; Node* previous;
};
       Node* head=NULL; Node* indicator=NULL;

///Node Insertion
void insertFirst(int value){
    Node* singleNode = new Node;
    singleNode->data = value;
    singleNode->next = NULL;
    singleNode->previous = NULL;
     if(head != NULL){
        singleNode->next= head;
        head->previous=singleNode;
     }    head = singleNode;
}
void insertLast(int value){
    Node* singleNode = new Node;

    singleNode->data = value;
    singleNode->next = NULL;
    singleNode->previous = NULL;
    Node* temp = head;
    while(temp->next!=NULL) temp = temp->next;
    singleNode->previous = temp;
    temp->next = singleNode;
}
void insertMid(int position, int value){
    Node* singleNode = new Node;
     Node* temp =head;

    for(int i=1; i<position-1;i++) temp=temp->next;
    indicator = temp->next;

    singleNode->data = value;
    singleNode->next = indicator;
    singleNode->previous = temp;
    temp->next = singleNode;
    indicator->previous= singleNode;
}

///Delete Node
void deleteFirst(){
    head = head->next;
    head->previous=NULL;
}
void deleteLast(){
    Node* temp = head; int position =1;
    while(temp->next->next!=NULL){
     temp = temp->next;
     position++;}
     //temp->previous=temp;
     temp->next=NULL;
}
void deleteMid(int position){
    Node* temp =head;

    for(int i=1;i<position-1;i++) temp = temp->next;
       indicator=(temp->next)->next;

       temp->next= indicator;
       indicator->previous=temp;
}



/// Print Node
void printList(){
    Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    } printf("\n");
}

/// Print in Reverse
void printListReverse(){
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->previous;
    }
     printf("\n");
}



int main()
{
    insertFirst(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
    printList();
    insertMid(3,25);
    insertMid(5,35);
    printList();
    deleteFirst();
    printList();
    deleteMid(4);
    printList();
    //deleteLast();
    //printList();
 //   deleteLast();
    printListReverse();
    return 0;
}
