#include<stdio.h>
#include <iostream>

template <typename T1, typename T2>
class Numbers {
public:
	T1 num1;
	T2 num2;

	Numbers(T1 num1, T2 num2) :num1(num1), num2(num2) {}

	auto PickSmaller() {
		return (num1 > num2) ? num2 : num1;
	}

	void Print() {
		std::cout << "[ " << num1 << ", " << num2 << " ]\n";
		std::cout << "Smaller number: " << PickSmaller() << "\n\n";
	}
};


int main() {
	//int‚Æint
	Numbers<int, int> intNint(10, 20);
	intNint.Print();

	//int‚Æfloat
	Numbers<int, float> intNfloat(5, 1.5f);
	intNfloat.Print();

	//int‚Ædouble
	Numbers<int, double> intNdouble(10, 5.55);
	intNdouble.Print();

	//float‚Æfloat
	Numbers<float, float> floatNfloat(2.3f, 1.5f);
	floatNfloat.Print();

	//float‚Ædouble
	Numbers<float, double> floatNdouble(2.3f, 1.44);
	floatNdouble.Print();

	//double‚Ædouble
	Numbers<double, double> doubleNdouble(1.23, 1.44);
	doubleNdouble.Print();


	return 0;
}