#include <iostream>
#include <string>
using namespace std;
// class for patient Node 
class PatientNode{
	public:
		int data;
		string name;
		PatientNode* next;
		// Constructor --> it is function which is called automatical when node or obj is created.
		PatientNode(int val, string str){
				data = val;
				name = str;
				next = NULL;
			}
		
};

// Function or Method to create a node and sort it according to priority 
void addPatient( PatientNode* &head, int val, string str){
		PatientNode* n = new PatientNode( val, str);
		if ( head == NULL){
			head = n;
			return;
		}
		PatientNode* temp = head;
		while( temp -> next != NULL){
			temp = temp->next; 
		}
		temp -> next = n;
		
		PatientNode *ptr, *ptr1;
		ptr1 = NULL;
		int swap;
		if ( head == NULL)
		{
			cout<<" Queue is empty "<<endl;
		}
		else
		{ // Sorting is done in the do-while loop here
			do{
				ptr = head;
				swap = 0;
				while(ptr->next != ptr1){
					if (ptr->data > ptr->next->data){
						int temp;
						string temp1;
						temp=ptr->data;
						temp1 = ptr->name;
						ptr->data=ptr->next->data;
						ptr->name = ptr->next->name;
						ptr->next->data= temp;
						ptr->next->name = temp1;
						
						swap = 1;
					}
					ptr = ptr->next;
				}
				ptr1=ptr;
				
			}while(swap);	
		}
		 
	}
	
// Method to return Patient with Heighest priority	
string proccessPatient(PatientNode* &head){
	return head->name;
}

// Method or Function to remove Patient with highest priority after treatment
void removePatient(PatientNode* &head){
	int temp;
	string temp1;
	PatientNode* n = head->next->next;
	temp = head->next->data;
	temp1 = head->next->name;
	head->data= temp;
	head->name = temp1;
	head->next = n;
}

// Simple Method or function for displaying the linked list priority queue
void display ( PatientNode* head){
	PatientNode* temp = head;
	while(temp!= NULL){
		cout<<"{"<<temp->data<<": "<<temp->name<< "}"<<" ";
		temp = temp->next;
	}
	cout<<endl;
}



int main(){
	// Creating the head node here
	PatientNode* head= NULL;	
	
	// adding the node to linked list priority queue
	addPatient(head, 1, "Gul hassan");
	addPatient(head, 43, "GH");
	addPatient(head,3, "Hussain");
	
	// Print out the Patient with highest priority
	cout<<"Top priority patient in the queue after processing the patients: "<<"{"<<head->data<<": "<< proccessPatient(head)<<"}"<<endl<<endl;
	
	// Displaying the Linked list priority queue
	cout<<"Patients"<<endl;
	display(head);
	
	// removing the Patient with highest priority from linked list priority queue
	removePatient(head);
	 
	// Displaying the Linked list priority queue after removing the highest priority patient
	cout<<endl;
	cout<<"After removing the top priority patient the queue is : "<<endl;
	display(head);
	
	return 0;
}
