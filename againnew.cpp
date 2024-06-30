#include<iostream>
using namespace std;
class Node{
    public:   
    int value;
    Node* next;

    public:
        Node(int value){
            this->value = value;
            next = nullptr;
        }
};
class LinkedList{
    private:
        Node* head;
        Node* tail;
        int length;
    public:
        LinkedList(int value){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length= 1;

        }

        ~LinkedList(){
            Node* temp = head;
            while(head){
                head = head->next;
                delete temp;
                temp = head;
            }
        }
        void printList(){
            Node* temp = head;
            while(temp){
                cout << temp->value<< " ";
                temp = temp->next;

            }
        }

        void append_to_list(int value){
            Node* newNode = new Node(value);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }
            else{
               
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        }

        void delelte_last(){
           
           
            Node*  temp = head;
            while(temp->next!= tail){
                temp = temp->next;
            }
            delete tail;
            temp->next = nullptr;
            Node* tail = temp;

            // while(temp->next != tail){
            //     temp = temp->next;
            // }
            // tail = 
            //  delete tail->next;
            // delete tail->value;
        }
        void prepend(int value){
                Node* temp = new Node(value);
                temp->next = head;
                head = temp;


        }
        void insert(int value,int n){
          Node* newNode = new Node(value);
    
           if(n==1){
                newNode->next = head;
                head = newNode;
           }
           else{
           Node* temp = head;
            
            for(int i=0;i<n-2;i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
           }
        }
        void delete_nth(int n){
            Node* temp1 = head;
            if(n==1){
                head = temp1->next;
                delete temp1;
            }
            else{
                for(int i=0;i<n-2;i++)
                    temp1 = temp1->next;//sets temp1 as n-1th Node
                Node* temp2 = temp1->next;//temp2  now represents nth element

                temp1->next = temp2->next;
                delete temp2;

            }
        }
        // void delete_value(int value){
        //     Node* temp = head;
        //     if(temp->value== value)
        //         {
        //             head = temp->next;
        //             delete temp;
        //         }
        //     else {
        //         while(temp->value != value){
        //             temp = temp->next;
        //         }
        //         Node* temp2 = head;
        //         while(temp2 != temp ){
        //             temp2 = temp2->next;
        //         }
        //         temp2->next = temp->next;
        //         delete temp;

        //     }

        // }
};
int main(){
    LinkedList* myLinkedList = new LinkedList(23);
    myLinkedList->append_to_list(25);
    myLinkedList->append_to_list(234);
    myLinkedList->append_to_list(12);
    myLinkedList->append_to_list(98);
    // myLinkedList->prepend(1125);
    myLinkedList->insert(343,3);
    myLinkedList->insert(45,1);
    myLinkedList->insert(45,8);
    myLinkedList->delete_nth(3);
    myLinkedList->delete_value(12);

    

    // myLinkedList->delelte_last();
    myLinkedList->printList();

}