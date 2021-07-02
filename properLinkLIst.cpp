#include<bits/stdc++.h>
using namespace std;
// insert first // insert mid // insert last //
// delete first // delete mid // delete last //

struct Node{
  int data;
  Node* next;
}; Node* head = NULL; Node* indicator=NULL;

void insertFirst(int value){
    Node* singleNode = new Node;

    singleNode->data = value;
    singleNode->next = NULL;
    Node* temp = head;
    head = singleNode;
    head->next = temp;
}
void insertLast(int value){
    Node* singleNode = new Node;

    singleNode->data = value;
    singleNode->next = NULL;

    Node* temp = head;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = singleNode;
}
void insertMid(int position, int value){
    Node* singleNode = new Node;
     Node* temp =head;

    for(int i=1; i<position-1;i++) temp=temp->next;
    indicator = temp->next;

    singleNode->data = value;
    singleNode->next = indicator;
    temp->next = singleNode;
}
void deleteFirst(){
    Node* temp = head;
    temp = temp->next;
    head = temp;
}
void deleteMid(int position){
    Node* temp =head;

    for(int i=1;i<position-1;i++) temp = temp->next;

       indicator=(temp->next)->next;
       temp->next= indicator;
}
void deleteLast(){
    Node* temp = head; int position =1;
    while(temp->next!=NULL){
     temp = temp->next;
     position++;}
     deleteMid(position);
}
void printList(){
    Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    } printf("\n");
}
void fun1(struct Node* head)
{
if(head == NULL)
return;
cout << head->data << " ";
fun1(head->next);
cout << head->data << " ";
}
int main()
{
    insertFirst(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
   // printList();
    insertMid(3,25);
    insertMid(5,35);
    printList();
//    deleteFirst();
//    printList();
//    deleteMid(4);
//    printList();
//    deleteLast();
//    printList();
//    deleteLast();
//    printList();
fun1(head);
    return 0;
}
