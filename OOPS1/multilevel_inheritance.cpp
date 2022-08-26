#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int n)
    {
        roll_no = n;
    }
    void get_roll_no()
    {
        cout << "Roll no: " << roll_no << endl;
    }
};
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};
class Result : public Exam
{
    float percentage;
    public:
    void display_result()
    {
        get_roll_no();
        get_marks();
        cout << "Percentage: " << (maths + physics) / 2 << endl;
    }
};
int main()
{   
    Result sk;
    sk.set_roll_no(2577);
    sk.set_marks(75,100);
    sk.display_result();

    return 0;
}