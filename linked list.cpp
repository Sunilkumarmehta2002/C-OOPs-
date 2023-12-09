#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
};
Node *head, *temp,*newnode;
int main(){
    int choice;
    cin>>choice;
    for (int i = 0; i < choice; i++){
        newnode = new Node();
        cout<<"Enter data: ";
        cin>>newnode->data;
        if(head==NULL){
            head= temp= newnode;
            newnode->next = NULL;
            newnode->prev = head;
        } 
        
        else{
            temp->next = newnode;
            newnode->prev = temp;
            newnode->next=NULL;
            temp = newnode;
        }
    }
    cout<<endl;
    temp = head;
    cout<<"Header linked list:";
        while(temp!=NULL){
            cout<<temp->data;
            temp = temp->next;
        }
    return 0;
}
