#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        next = nullptr;
    }

};
class Queue{
    private:
        Node* first;
        Node* last;
        int length;
    public:
        Queue(int value){
            Node* newNode = new Node(value);
            first = newNode;
            last = newNode;
            length =1;
        }
        
}