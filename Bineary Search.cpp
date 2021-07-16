#include <iostream>

using namespace std;

int BinarySearch(int arr[],int targ)
{
//	int targ = targ;
	int left = 0;
	int right = sizeof(arr)-1;
	
	while(left<=right)
	{
		int mid = left + (right-left)/2;
		cout<<mid<<endl<<endl;
		if (arr[mid]== targ){
			return mid;
		}
		else if (arr[mid]< targ)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}

int main(){
	int arr[4];
	
	arr[0] = 2;
	arr[1] = 3;
	arr[2] = 4;
	arr[3] = 7;
	arr[4] = 10;
	int target;
	cout<<"Enter the number to find in the array: ";
	cin>>target;
	
	int result = BinarySearch(arr,target);
	
	if (result >= 0){
		cout<<"Match of nuber is found at index of: "<<result<<endl;
	}
	else{
		cout<<"NO Match of that number is found in the array!!"<<endl;
	}

	return 0;
}
//int binarySearch(int arr[], int left, int right, int x) {
//  while (left <= right) {
//    int mid = left + (right - left) / 2;
//
//    if (arr[mid] == x) {
//      return mid;
//    } else if (arr[mid] < x) {
//      left = mid + 1;
//    } else {
//      right = mid - 1;
//    }
//  }
//
//  return -1;
//}
//
//int main() {
//  int myarr[10];
//  int num;
//  int output;
//
//  cout << "Please enter 10 elements ASCENDING order" << endl;
//  for (int i = 0; i < 10; i++) {
//    cin >> myarr[i];
//  }
//  cout << "Please enter an element to search" << endl;
//  cin >> num;
//
//  output = binarySearch(myarr, 0, 9, num);
//
//  if (output == -1) {
//    cout << "No Match Found" << endl;
//  } else {
//    cout << "Match found at position: " << output << endl;
//  }
//
//  return 0;
//}
