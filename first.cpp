#include <iostream>
#include <string>
using namespace std;

class First{
public:
	 int num;
	 string name;
	 void Hello (string hi){
	 	
	 	cout<< hi;
	 };
};

int main()
{
	First obj;
	obj.num = 20;
	obj.name = "Gul hassan";
	cout<<obj.num <<endl<<obj.name<<endl;
	cout<<"Welcom back Cpp"<<endl;
	obj.Hello("GH");
	return 0;
}
