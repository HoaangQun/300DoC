#include <iostream>
using namespace std;

int double_plus_backward(int *input) {
	int intermediate = (*input);
	(*input) += 1;
	return intermediate;	
};

int double_plus_forward(int *input) {
	(*input) += 1;
	return (*input);
};

int main() {
	int a, b;

	cout << "put a number: ";
	cin >> a;

	b = double_plus_backward(&a);
	
	cout << "  b = a++\n";
	cout << "a = " << a << endl;
	cout << "b = " << b << "\n";
	
	b = double_plus_forward(&a);
	
	cout << "  b = ++a\n";
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
