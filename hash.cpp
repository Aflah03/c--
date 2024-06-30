#include<iostream>
using namespace std;
class Node{
   public:
    Node* next;
    string key;
    int value;
    public:
        Node(string key,int value){
            this->key=key;
            this->value= value;
        }
};
class HashTable{
    
    private:
    static const int SIZE=7;
    Node* dataMap[SIZE];

    public:
    void PrintTable(){
        for(int i=0;i<SIZE;i++){
            Node* temp = dataMap[i];
            if()
        }
    }

};
int main(){

}