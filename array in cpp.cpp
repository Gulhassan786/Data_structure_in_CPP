#include <iostream>
using namespace std;

int main(){
	int arr[3];
	int var = 0;
	cout << "enter a number to enter the element in the array: ";
	cin>>var;
//	for (int i=0; i<=var; i++){
//		int temp = 0;
//		cout<<"Enter element for the array: ";
//		cin>>temp;
//		arr[i]= temp;
//	}
	
	for (int j=0; j <= sizeof(arr); j++){
		cout<<arr[j]<<" ";
	}
	return 0;
}
