#include <iostream>
#include <algorithm>
using namespace std;

class polynomialclass
{
private:
    int degree;
    int *degcoeff;

public:
    // default constructor
    polynomialclass(/* args */)
    {
        int degree = 5;
        int *degcoeff = new int[degree + 1];
        for (int i = 0; i <= degree; i++)
        {
            degcoeff[i] = 0;
        }
        cout << "def const called" << endl;
    }
    // copy constructor
    polynomialclass(polynomialclass const &p)
    {
        this->degree = p.degree;

        int *p1 = new int[degree + 1];
        for (int i = 0; i <= degree; i++)
        {
            p1[i] = p.degcoeff[i];
        }
        
        degcoeff = p1;
        delete[] degcoeff;

        cout << "copy const called" << endl;
    }
    // print function
    void print1()
    {
        for (int i = 0; i <= degree; i++)
        {
            if (degcoeff[i] == 0)
            {
                continue;
            }
            else
            {
                cout << degcoeff << "x" << i << " ";
            }
        }
    }
    // copy assignment operator
    void operator=(polynomialclass const &z)
    {
        this->degree = z.degree;
        int *o = new int[degree + 1];
        for (int i = 0; i <= degree; i++)
        {
            o[i] = z.degcoeff[i];
        }
        delete[] degcoeff;
        degcoeff = o;
    }
    //+
    polynomialclass operator+(polynomialclass const &o)
    {
        polynomialclass temp;
        temp.degree = std::max(this->degree, o.degree);
        int *p1 = new int[temp.degree + 1];
        for (int i = 0; i <= degree; i++)
        {
            p1[i] = this->degcoeff[i] + o.degcoeff[i];
        }
        temp.degcoeff = p1;
        return temp;
    }
    //-
    polynomialclass operator-(polynomialclass const &o)
    {
        polynomialclass temp;
        temp.degree = std::max(this->degree, o.degree);
        int *p1 = new int[temp.degree + 1];
        for (int i = 0; i <= degree; i++)
        {
            p1[i] = this->degcoeff[i] - o.degcoeff[i];
        }
        temp.degcoeff = p1;
        return temp;
    }

    // setcoeff
    void setcoeff(int d, int c)
    {
        cout << "entered" << endl;
        if (degree >= d)
        {
            degcoeff[d] = c;
            return;
        }
        else
        {
            int olddegree = degree;
            while (degree >= d)
            {
                degree += degree;
            }
            int newdegree = degree;
            int *p = new int[degree + 1];
            for (int i = 0; i <= degree; i++)
            {
                p[i] = 0;
            }
            for (int i = 0; i <= olddegree; i++)
            {
                p[i] = degcoeff[i];
            }
            delete[] degcoeff;
            degcoeff = p;
            degcoeff[d] = c;
        }
        cout << "set coeff called" << endl;
        return;
    }
};

int main()
{
    polynomialclass p1;
    int n;
    cout << "enter no. of bs" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter degree and coeff" << endl;
        int d, c;
        cin >> d;
        cin >> c;
        p1.setcoeff(d, c);
    }
    polynomialclass p2;
    int m;
    cout << "enter no. of bs" << endl;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "enter degree and coeff" << endl;
        int d, c;
        cin >> d;
        cin >> c;
        p2.setcoeff(d, c);
    }
    // polynomialclass p3(p2);
    polynomialclass p4;
    p4 = p1 + p2;
    p1.print1();
    p2.print1();
    // p3.print1();
    p4.print1();
}