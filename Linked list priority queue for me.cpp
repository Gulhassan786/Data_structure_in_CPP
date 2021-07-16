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
		PatientNode(int val, string str)
		{
				data = val;
				name = str;
				next = NULL;
			}
			
			// functions protoypes
			void addPatient( PatientNode* &head, int val, string str);
		
			string proccessPatient(PatientNode* &head);
		
			void removePatient(PatientNode* &head);
		
};

// Function or Method to create a node and sort it according to priority 
void PatientNode :: addPatient( PatientNode* &head, int val, string str)
	{	
		// Creating Node here
		PatientNode* n = new PatientNode( val, str);
		
		// Checking if node is null or not
		if ( head == NULL){
			head = n;
		
			return;
		}
		// created the temporary object
		PatientNode* temp = head;
		// moving the node forward
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
						int temp_var;
						
						string temp1_var;
						
						temp_var=ptr->data;
						
						temp1_var = ptr->name;
						
						ptr->data=ptr->next->data;
						
						ptr->name = ptr->next->name;
						
						ptr->next->data= temp_var;
						
						ptr->next->name = temp1_var;
						
						swap = 1;
					}
					ptr = ptr->next;
				}
				ptr1=ptr;
				
			}while(swap);	
		}
		 
	}
	
// Method to return Patient with Heighest priority	
string PatientNode :: proccessPatient(PatientNode* &head)
{
	return head->name;
}

// Method or Function to remove Patient with highest priority after treatment
void PatientNode :: removePatient(PatientNode* &head)
{
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
void display ( PatientNode* head)
{
	PatientNode* temp = head;
	
	while(temp!= NULL){
		cout<<"{"<<temp->data<<": "<< temp->name<<"}" <<" ";
		
		temp = temp->next;
	}
	cout<<endl;
}



int main(){
	// Creating the head node here
	PatientNode* head= NULL;	
	
	// adding the node to linked list priority queue. Queue will be sorted highest priority to lowest
	head->addPatient(head, 1, "Gul hassan");
	
	head->addPatient(head, 43, "Noor Hussain");
	
	head->addPatient(head,3, "Muzamil");
	
	// Displaying the Linked list priority queue
	cout<<"Patient in queue"<<endl;
	display(head);
	cout<<endl;
	// Print out the Patient with highest priority
	cout<< "After processing Patient with top priority is : " <<"{"<< head->data << ": "<< head->proccessPatient(head) << "}"<<endl;
	
	cout<<endl;
	
	// removing the Patient with highest priority from linked list priority queue
	head->removePatient(head);
	
	cout<<"after removing the top priority Patient remaining for process in queue are  "<<endl;
	// Displaying the Linked list priority queue after removing the highest priority patient
	display(head);
	
	cout<<endl<<endl;
	
	// adding new patient to the queue and displaying the queue
	cout<<"adding new patient to the linked list priority queue !!! "<<endl;
	
	head->addPatient(head, 55, "Aftab");
	
	display(head);
	
	/* We can take input from users as well but for now I had make it simple. 
	And we can add more nodes in queue as many as we want. 
	The queue is sorte according to top or highest value of Patient priority */
	return 0;
}
