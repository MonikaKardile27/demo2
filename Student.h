
#include<iostream>
#include<string>
using namespace std;

class Student
{
	private:
		int id;
		string name;
		string address;
	public:
		Student();
		Student(int id,string name,string address);
		
		int getId();
		string getName();
		string getAddress();
		void setId(int id);
		void setName(string name);
		void setAddress(string address);
};
