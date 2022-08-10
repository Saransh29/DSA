
#include<iostream>
#include <cstring>
using namespace std;


class Student {
	int age;
	

	public :
	char *name;

	Student(int age, char *name) {
		this -> age = age;
		// Shallow copy
		//this -> name = name;     //sirf array ka reference , 1st location ka address copy
	

	
		// Deep copy             new copy of array

		this -> name = new char[strlen(name) + 1];
		strcpy(this -> name, name);
		
	
	}	

	Student(Student const &s){						//Student(Student s) 		infinite loop
  		this->age=s.age;
		// this->name=s.name; 		shallow copy

		this -> name = new char[strlen(s.name) + 1];
		strcpy(this -> name, s.name);

	}

	void display() {
		cout << name << " " << age << endl;
	}
};

int main() {
	char name[] = "abcd";
	Student s1(20, name);
	s1.display();
	

	//Student s2(s1)      inbuilt copy constructor uses shallow copy

	Student s2(s1);

	s2.name[3] = 'e';
	
	s1.display();

	s2.display();


}
