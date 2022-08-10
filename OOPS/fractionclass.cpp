#include<iostream>
using namespace std;



class Fraction {
	private :

		int num;
		int deno;

	public :

		Fraction(int num, int deno) {
			this -> num = num;           //arguement wale ki value main operator m 
			this -> deno = deno;
		}

		void print() {
			cout << this -> num << " / " << deno << endl;
		}


		void simplify() {
			int gcd = 1;
			int j = min(this -> num, this -> deno);
			for(int i = 1; i <= j; i++) {
				if(this -> num % i == 0 && this -> deno % i == 0) {
					gcd = i;
				}
			}
			this -> num = this -> num / gcd;
			this -> deno = this -> deno / gcd;
		}

		void add(Fraction const &f2) { 		//if we use Fraction &f2 then it will change the value in original f2
											//to avoid this we use const &f2
			int lcm = deno * f2.deno;
			int x = lcm / deno;
			int y = lcm / f2.deno;

			int num1 = x * num + (y * f2.num);

			num = num1;
			deno = lcm;

			simplify();	

		}
		void multiply(Fraction const  &f2)
		{
			num=num*f2.num;
			deno=deno*f2.deno;
			simplify();
		}
};

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);

    f1.add(f2);

    f1.print();
    f2.print();

	f1.multiply(f2);

	f1.print();
    f2.print();
    
}
