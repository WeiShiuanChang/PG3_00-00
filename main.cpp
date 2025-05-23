#include <iostream>

// テンプレートクラス
template <typename T1, typename T2>
class Numbers {
public:
	T1 num1;
	T2 num2;

	// コンストラクタ：2つの値で初期化
	Numbers(T1 num1, T2 num2) :num1(num1), num2(num2) {}

	// より小さい値を返す関数
	auto PickSmaller() {
		return (num1 > num2) ? num2 : num1;
	}

	// 数値とそのうち小さい方を出力する関数
	void Print() {
		std::cout << "[ " << num1 << ", " << num2 << " ]\n";
		std::cout << "Smaller number: " << PickSmaller() << "\n\n";
	}
};


int main() {
	//int と int
	Numbers<int, int> intNint(10, 20);
	intNint.Print();

	//int と float
	Numbers<int, float> intNfloat(5, 1.5f);
	intNfloat.Print();

	//int と double
	Numbers<int, double> intNdouble(10, 5.55);
	intNdouble.Print();

	//float と float
	Numbers<float, float> floatNfloat(2.3f, 1.5f);
	floatNfloat.Print();

	//float と double
	Numbers<float, double> floatNdouble(2.3f, 1.44);
	floatNdouble.Print();

	//double と double
	Numbers<double, double> doubleNdouble(1.23, 1.44);
	doubleNdouble.Print();


	return 0;
}