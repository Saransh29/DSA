#include<iostream>
using namespace std;

class Student{
                    //Access modifiers                         
    public:           //by default private
    int age;
    string name;
    int rollno;

    private:
    int year;

    public:
    void introduction(){
        cout<<"Name "<<name<<endl;
        cout<<"age "<<age<<endl;
        cout<<"roll no. "<<rollno<<endl;

    }
    
};

int main(){
    Student s1;
    s1.age=21;
    s1.name="sk";
    s1.rollno=10;

    Student s2;
    s2.age=31;
    s2.name="drake";
    s2.rollno=11;

    Student s3,s4,s5;

    

    Student *s6= new Student;  //dynamically allocated

    (*s6).age=24;
    (*s6).rollno=30;

    Student *s7= new Student;

    s7->age=30;
    s7->rollno=11;   //same purpose as above

    s1.introduction();
    s2.introduction();

}