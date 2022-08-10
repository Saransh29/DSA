#include<iostream>
using namespace std;

class abstractStudent{
    virtual void askforupgrade()=0;
};




class Student:abstractStudent{
                    //Access modifiers                         
    private:           //by default private
    int Age;
    string Name;
    int Rollno;
    int year;

    public:
        void setname(string name){ //setter -> to access private properties
            Name=name;
        }
        string getname(){          //getter
            return Name;
        }
        void setage(int age){
            Age=age;
        }
        int getage(){
            return Age;
        }
        void setroll(int roll){
            Rollno=roll;
        }
        int getroll(){
            return Rollno;
        }

    void introduction(){
        cout<<"Name "<<Name<<endl;
        cout<<"age "<<Age<<endl;
        cout<<"roll no. "<<Rollno<<endl;
    }
    Student(string name,int age,int rollno){
            Name=name;
            Age=age;
            Rollno=rollno;
    }
    void askforupgrade(){
        if(Age>20)
        cout<<Name<<" upgraded"<<endl;
        else
        cout<<Name<<" not upgraded"<<endl;
    }
    

};

int main(){
    /*Student s1;
    s1.age=21;
    s1.name="sk";
    s1.rollno=10;

    Student s2;
    s2.age=31;
    s2.name="drake";
    s2.rollno=11;*/

   Student s1 = Student("sk",21,2577);
   s1.introduction();

   Student s2 = Student("asd",20,201);
   s2.introduction();


    /*s1.setage(38);
    cout<<s1.getname()<<" "<<s1.getage()<<endl;*/

    s1.askforupgrade();
    s2.askforupgrade();
}