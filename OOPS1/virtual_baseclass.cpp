#include <bits/stdc++.h>
using namespace std;
/*

       ______Student_________
      |                     |
    Test                Sports
      |                     |
      |______Result_________|

*/

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
class Test : virtual public Student
{
protected:
    float physics;
    float maths;

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
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        // cin>>s;
        score = s;
    }
    void get_score()
    {
        cout << "Score: " << score << endl;
    }
};
class Result : public Test, public Sports
{

public:
    void display_result()
    {
        get_roll_no();
        cout<<"Result: "<<endl;
        get_marks();
        get_score();
        cout << "Percentage: " << (maths + physics + score) / 3 << endl;
    }
};
int main()
{
    Result sk;
    sk.set_roll_no(2577);
    sk.set_marks(75, 100);
    sk.set_score(89.0);
    sk.display_result();
    return 0;
}