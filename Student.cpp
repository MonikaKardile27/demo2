
#include "Student.h"
using namespace std;

	Student::Student()
	{
		id=100;
		name="dsd";
		address="sdbdbh";
		cout<<"id" <<id<<"  "<< "name" <<name<< "  " <<"address" <<address<<endl;
	}
		Student::Student(int id,string name,string address){
			this->id=id;
			this->name=name;
			this->address=address;
		}
		
		int Student::getId()
		{
			return id;
		}
	string Student:: getName(){
			return name;
		}
	string Student::getAddress(){
			return address;
		}
		void Student::setId(int id){
			this->id=id;
		}
		void Student::setName(string name)
		{
			this->name=name;
		}
		void Student:: setAddress(string address)
		{
			this->address=address;
		}


