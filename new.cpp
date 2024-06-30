#include<iostream>
#include<string>
using namespace std;
struct Node{
    int data;
    Node* link;
};
Node* head;
void insert(int x){
    Node* temp = new Node;
    temp->data = x;
    temp->link=head;
    head = temp;
}
void print(){
    Node* temp = head;
   printf("List is: ");
    while(temp != NULL){
        printf("%d ",temp->data);

        temp = temp->link;
    }
    printf("\n");
}

int main(){
    head = NULL;
    int n,x,i;
    cout <<"How many numbers";
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter number: ");
        scanf("%d",&x);
        insert(x);
        print();
    }
    
}