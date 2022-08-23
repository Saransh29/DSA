#include <iostream>
using namespace std;

class Student
{
    // Access modifiers   //by default private
    //  -  public:
    //  -  private:
    //  -  protected:

public:
    
    string name;
    int age;
    int rollno;

private: // can only be accessed inside the class
    int year;

public:
    int get_year() // getter used to access private object in class
    {
        return year;
    }
    void set_year(int y) // setter used to set private object in class
    {
        year = y;
    }
    int get_age()
    {
        return 2022-year;
    }
    void introduction()
    {
        cout << "Name: " << name << endl;
        cout << "age: " << get_age() << endl;
        cout << "roll no.: " << rollno << endl;
        cout << "year: " << year << endl;
        cout << endl;

    }
};



class temp
{
    public:
    static int cnt;
    int count=0;
    void t1(){
        cnt++;
        count++;
    }
};
int temp::cnt;

int main()
{
    temp t1;
    temp t2;
    t1.t1();
    t2.t1();
    cout<<"cnt: "<<t2.cnt<<endl;
    cout<<"cnt: "<<temp::cnt<<endl;
    cout<<"count: "<<t2.count<<endl;



    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    Student s1;
    // /*
    // s1.age = 21;
    s1.name = "sk";
    s1.rollno = 10;
    s1.set_year(2001);
    cout<<"age using get_age: "<<s1.get_age()<<endl;

    Student s2;
    s2.age = 32;
    s2.name = "drake";
    s2.rollno = 11;
    s2.set_year(1990);

    s1.introduction();
    s2.introduction();

    cout << endl;
    // cout << "s1 cnt: " << s1.cnt << endl;
    cout << "size of s1 : " << sizeof(s1) << endl;
    cout << endl;

    Student s3, s4, s5; // static allocation

    Student *s6 = new Student; // dynamically allocated

    // here s6 is pointer to a Student object
    // and it is pointing to the address of the object
    // which is allocated in the heap

    (*s6).age = 24;
    (*s6).rollno = 30;
    (*s6).set_year(1947);
    (*s6).name = "sai";
    (*s6).introduction();

    Student *s7 = new Student;

    s7->age = 30;
    s7->rollno = 11; // same purpose as above

    // array og objects
    cout<<"array of objects"<<endl;
    Student list[10];
    list[0].age = 20;
    list[0].rollno = 10;
    list[0].set_year(2001);
    list[0].name = "list 0";
    list[0].introduction();


    // */
}