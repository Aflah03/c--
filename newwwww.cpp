#include<iostream>
using namespace std;
// struct Node{
//     int data;
//     Node* link;
// };
// Node* head;//declaring it here so its valuse is global
// void insert(int x){
//     Node* newNode = new Node;
//     newNode->data = x;
//     newNode->link = head;
//     head = newNode;
// }
// void print(){
//     Node* temp = head;
//    printf("the list is : ");
//     while(temp != NULL ){
//         cout << temp->data << " ";
//         temp = temp->link;
//     }
//     cout << endl;
// }
// int main(){
//     head = NULL;
//     int i,x,n;
//     cout << "Enter the nummber of elements: ";
//     cin >> n;
//     for(i=0;i<n;i++){
//         cout << "Enter element: ";
//         cin >> x ;
//         insert(x);
//         print();
//     }

// }

// class Node{
//     public:
//         int value;
//         Node* next;

//         Node(int value){
//             this->value = value;   // this-> to refer to memmber variable 
            //  this->next = nullptr;
//              next = nullptr; //both  fine 
// }
//OR
class Node{
    public:
        int value;
        Node* next;

        Node(int val){
            value = val;
            next =nullptr;
        }
};

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        int length;
    public:
        LinkedList(int value)
    {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length =1;
        }
        void printList(){
            Node * temp = head;
            while(temp){
                cout << temp->value << "";
                temp = temp->next;
            }
        }
        void getHead(){
            cout << "Head: "<< head->value << endl;
        }
        void getTail(){
            cout << "Tail: "<< tail->value << endl;
        }
        void getLength(){
            cout << "Length: " << length << endl;
        }
        void append(int value){
            Node* newNode = new Node(value);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;

            }
            }
        };


int  main(){
    LinkedList* myLinkedList = new LinkedList(4);
    // myLinkedList->getHead();

    // myLinkedList->printList();
    myLinkedList->append(5);
    myLinkedList->printList();
}