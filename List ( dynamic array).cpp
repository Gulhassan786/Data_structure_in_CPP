#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst){
	
	list<int> :: iterator iter;

	for ( iter = lst.begin(); iter!= lst.end(); iter++){
		cout<< *iter<<" ";

	}
}

int main(){
	list<int> lst;
	
	lst.push_back(2);
	lst.push_front(3);
	lst.push_back(5);
	lst.push_front(10);
	lst.push_back(2);
	lst.push_front(3);
	lst.push_back(5);
	lst.push_front(10);
	lst.sort();
	display(lst);
	
//	lst.pop_back();

//	lst.pop_front();

//	lst.remove(value);

	return 0 ;
}
