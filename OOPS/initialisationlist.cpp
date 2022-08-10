#include<iostream>
using namespace std;

class Student{
    static int totalstudents;     // static members

   
    public:
    int age;
    //const int rollno; 
    int idno;
    


    Student(){
        totalstudents++;
    }
    
    /*Student(int r,int a ) : rollno(r) , age(a)         //Initialisation list
    { 
    
    }*/
    /*void display() {
		cout << rollno << " " << age << " " <<idno<< endl;
	}*/

    static int gettotalstudents()       // can only access static objects
                                        // cannot use this pointer
    {
        return totalstudents;
    }
    
};

int Student :: totalstudents = 0; // initialise static members

int main()
{
    Student s1;
    Student s2;
    Student s4,s3,s5;
    cout<<s1.age<<" "<<s1.idno<<endl;

   // cout<<Student::totalstudents<<endl;      // will give error as we private totalstudents
 
    cout<<Student::gettotalstudents()<<endl;


   // Student const s3=s1;
   // cout<<s3.rollno;



   
}