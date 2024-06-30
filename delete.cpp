#include<iostream>
using namespace std;
struct Node{
    int value;
    Node* next;
};
Node* front= NULL;
Node* rear =  NULL;
void Enqueue(int x){
    Node* newNode = new Node;
    newNode->value = x;
    newNode->next = NULL;
    if(front ==NULL &&rear == NULL){
        rear = newNode;
        front =newNode;
        return ;
        }
    rear->next = newNode;
    rear = newNode;
}
void Dequeue(){
    if(front==NULL){
        cout<< "QUeue is empty";
    return;
    if(front==rear)
        front = rear = NULL;
            }
    Node* temp = front;
    front = front->next;
    delete temp;

}
void PrintQueue(){
    Node* temp = front;
    while(temp){
        cout << temp->value <<endl;
        temp = temp->next;
    } 
}
int main(){
    Enqueue(5);
    Enqueue(6);
    Enqueue(12);
    Enqueue(24);
    Enqueue(125);
    Dequeue();
    PrintQueue();
}fseek fen os this is ouot the problem that we are afacing asa of now