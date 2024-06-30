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
class Stack{
    private:
        Node* top;
        int height=0;

    public:     
        Stack(int value){
            Node* newNode = new Node(value);
            top = newNode;
            height = 1;
        }
        
        void printStack(){
            Node* temp = top;
            while(temp != nullptr){
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void getTop(){
            cout << "top is: "<< top->value << endl;
        }

        void getHeight(){
            cout << "Height is: "<< height << endl;
        }

        void push(int value){
            Node* newNode = new Node(value);
            newNode->next =top;
            top = newNode;
            height++;
            //also works for empty stack
            //when we need tail we should write exception for empty list
            }

        int pop(){
            if(height == 0) return INT_MIN;
            else{
            
            Node* temp = top;
            int poppedVlaue  = top->value;
            top = temp->next;
            delete temp;
            height--;
            return poppedVlaue;
            
            }
        }

};
int main(){
    Stack* myStack = new Stack(45);
    myStack->push(56);
    myStack->push(12);
     myStack->pop();
    //  myStack->pop();
 
    //  cout << myStack->pop();

   

    myStack->printStack();
}