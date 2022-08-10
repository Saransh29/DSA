#include <iostream>
using namespace std;

class ComplexNumbers{
    private :

		int a;
		int b;

	public :

		ComplexNumbers(int a, int b) {
			this -> a = a;           //arguement wale ki value main operator m 
			this -> b = b;
		}

		void print() {
			cout << this -> a << " + " << b <<"i"<<endl;
		}


		void plus(ComplexNumbers const &c2) { 		

			
			a=a+c2.a;
			b=b+c2.b;


		}
		void multiply(ComplexNumbers const  &f2)
		{
			int x=a*f2.a;
			int y=b*f2.b;
            int z=a*f2.b;
            int t=b*f2.a;

            a=x-y;
            b=t+z;
			
		}

};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}