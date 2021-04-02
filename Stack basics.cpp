#include <iostream>
using namespace std;
#define n 100
class Stack{

public:
    int* arr;
	int top;
	Stack(){
		arr = new int[n];
		top = -1;
	}
	
	void push(int value){
	if (top == n-1){
		cout<<"Stack over-flow"<<endl;
		return;
	}
	
		top++;
		arr[top] = value;
	}
	
	void pop(){
	if( top == -1){
		cout<<"Stack is empty "<<endl;
	}
	
		top--;
	}
	
	int Top(){
		if (top == -1){
		cout<<"NO element at top"<<endl;
		return -1;
	}
		return arr[top];
	}
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
