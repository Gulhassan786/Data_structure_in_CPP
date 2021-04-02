#include <iostream>
using namespace std;
#define n 100
class Stack{
	int* arr;
	int top;
public:
// constructor function
	Stack(){
	arr = new int[n];
	top = -1;
	}
	// Function for putting elements in the stack
	void push(int value){
	if (top == n-1){
		cout<<"Stack over-flow"<<endl;
		return;
	}
	
		top++;
		arr[top] = value;
	}
	// geting top means last element of the stack
	void pop(){
	if( top == -1){
		cout<<"Stack is empty "<<endl;
	}
	
		top--;
	}
	// Gettting top element from the stack
	int Top(){
		if (top == -1){
		cout<<"NO element at top"<<endl;
		return -1;
	}
		return arr[top];
	}
	// Checking either stack is empty or not
	bool empty(){
		return top == -1;
	}

 };

int main(){
	Stack stk;
	stk.push(2);
	stk.push(4);
	stk.push(5);
	cout<<stk.Top()<<endl;
	stk.pop();
	cout<<stk.Top()<<endl;
	cout<<stk.empty()<<endl;
	return 0;
}
