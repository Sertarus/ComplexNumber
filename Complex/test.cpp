#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

int main() {
	ComplexNumber test1 = ComplexNumber(1.0, 2.0);
	ComplexNumber test2 = ComplexNumber(2.0, 3.0);

	test1.SetRealPart(3.0);
	test2.SetImaginaryPart(1.0);
	cout << test1.GetRealPart() << endl;
	cout << test2.GetImaginaryPart() << endl;
	ComplexNumber test_sum = test1.Sum(test2);
	ComplexNumber test_sub = test1.Sub(test2);
	ComplexNumber test_mult = test1.Mult(test2);
	test_sum.Print();
	test_sub.Print();
	test_mult.Print();
	return 0;
}