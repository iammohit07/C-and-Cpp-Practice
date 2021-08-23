//Linked list
#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
	
	node(int value){
		data =  value;
		next = NULL;
	}	
	
};

void insertAtTail(node* &head,int val){
	node* n = new node(val);
	if(head == NULL){
		head = n;
		return;
	}
	

	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
	
}

void insertAtHead(node* &head,int val){
	node* n = new node(val);
	n->next = head;
	head = n;
}
void printLinkedList(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

bool searchVal(node* head,int val){
	node* temp = head;
	while(temp->next == NULL){
		if(temp->data== val){
			return true;
		}
		temp = temp->next;
	}
	return false;
}
 int main(){
 	
 	node* head = NULL;
 	insertAtTail(head,1);
 	insertAtTail(head,2);
 	insertAtTail(head,3);
 
 	
 	insertAtHead(head,5);
 	insertAtHead(head,7);
 	
 	printLinkedList(head);
 	
 	searchVal(head,8);
 	return 0;
 }

