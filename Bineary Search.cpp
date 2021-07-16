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

