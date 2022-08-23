#include <iostream>
using namespace std;

class Student
{        // Access modifiers
private: // by default private
    int age;
    string name;
    int rollno;
    int year;

public:
    void setname(string name) // setter -> to access private properties
    {
        this->name = name;
    }
    string getname()
    { // getter
        return name;
    }
    void setage(int age)
    {
        this->age = age;
    }
    int getage()
    {
        return age;
    }
    void setroll(int rollno)
    {
        this->rollno = rollno;
    }
    int getroll()
    {
        return rollno;
    }
    void introduction()
    {
        cout << "name " << this->name << endl;
        cout << "age " << this->age << endl;
        cout << "roll no. " << this->rollno << endl;
        cout << endl;
    }
    Student(string name, int age, int rollno) // constructor
    {
        cout << "address of this: " << this << endl;
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }
    Student(Student& s)
    {
        this->age = s.age;
        this->name = s.name;
        this->rollno = s.rollno;
    }
};

int main()
{
    /*
    Student s1("sk", 21, 2577);
    cout << "address of s1: " << &s1 << endl;

    // s1.introduction();

    Student s2("asd", 20, 201);
    cout << "address of s2: " << &s2 << endl;

    // s2.introduction();

     */
    // s1.setage(38);
    // cout << s1.getname() << " " << s1.getage() << endl;q

    // Student s1("sk", 21, 2577);
    

    
    cout << "s1" << endl;
    s1.introduction();

    cout << "s3" << endl;
    Student s3(s1);
    s3.introduction();

    s3.setage(1000);
    s3.introduction();

    cout << endl;
    s1.introduction();
}