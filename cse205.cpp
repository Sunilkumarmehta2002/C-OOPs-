#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
}; 
struct Node *head ,*tmp;
int main(){
	int choice;
	head=NULL;
	while(choice){
		Node* newnode=new Node();
		cout<<"ENter the data";
		cin>>newnode->data;
		newnode->next=NULL;
		if(head==NULL){
			head=tmp=newnode;
		}
		else{
			tmp->next=newnode;
			tmp=newnode;
			
		}
		cout<<"Do you want to continue:(0,1):";
		cin>>choice;
		
	}
	tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<"->";
		tmp=tmp->next;
		
	}
	return 0;
}
