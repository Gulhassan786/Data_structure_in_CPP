#include <iostream>
using namespace std;
#define n 5
class queue{
	int front;
	int back;
	int arr[n];
	public:
		// This is the constructor
		queue(){
			front = -1;
			back = -1;
		};
	// function for the putting element in the queue
	void push(int num){
		// as back starts from 0 mean when n == 5 break == 4 and break == n
		if (back == n-1){
			cout<<"Queue overflow"<<endl;
			return;
		}
		back++;
		// putting values in position of back
		arr[back] = num;
		// checking if the front is zero move it to the one
		if ( front == -1){
			front ++;
		}
		};
	// function for the getting out top element from the queue
	void pop(){
		if ( front == -1 || front > back){
			cout<<" Queue is empty"<<endl;
			return;
		}
		front ++;
	};
	int peek(){
		if( front == -1 || front > back){
			cout<<"Queue has no element"<<endl;
			return -1;
		}
		return arr[front];
	};
	bool empty(){
		if ( front == -1 || front > back){
			return true;
		}
		return false;
	};
};

int main(){
	
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
//	q.push(6);
	
//	cout<<"First time checking top element : " <<q.peek()<<endl;
//	q.pop();
//	cout<<"Second time checking top element : "<<q.peek()<<endl;
//	q.pop();
//	cout<< "Third time checking the top element : "<<q.peek()<<endl;
//	q.pop();
//	q.pop();
	cout<<" Is Queue is empty: "<< q.empty()<<endl;
	
	
	return 0;
}
