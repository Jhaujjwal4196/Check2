#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node * getInput(){
    cout<<"Plesae provide data and press -1 when you wanna close"<<endl;
    int data;
    cin>>data;
    Node *head= NULL;
    while(data!=-1){
        Node *newNode= new Node(data);
        if(head==NULL){
        head= newNode;
        }
        else{
        Node *temp=head;
        while(temp->next!=NULL)
        temp=temp->next;

        temp->next= newNode;}
        cin>>data;

    }return head;
}
void Insert(Node *head, int i , int data){
    Node *temp= head;
    Node *nextNode= temp->next;
    Node *newNode= new Node(data);
    for(int j=0;j<i-1;j++){
    temp=temp->next; nextNode= nextNode->next;}
    temp->next= newNode;
    newNode->next=nextNode;

}
void print(Node *head){
    while(head->next!=NULL){
    cout<<head->data<<"\t";
    head=head->next;}
    cout<<head->data<<endl;
}
void delete_(Node *head, int i){
Node *temp= head;
for(int j=0;j<i-1;j++)
temp=temp->next;
Node *nextNode= temp->next;
temp->next= nextNode->next;
delete(nextNode);
}
void deleteNode(Node* node) {
        node->data= node->next->data;
        node->next=node->next->next;
    }
 main(){
    Node *head= getInput();
     print(head);
     Insert(head,2,34);
     print(head);
     delete_(head,3);
     print(head);
 }